import socket
import threading # handle requests from users
import os		 # check if a file exists

def RetrFile(name, sock):
	filename = sock.recv(1024).decode()
	if os.path.isfile(filename):
		path = 'EXISTS ' + str(os.path.getsize(filename))
		sock.send(path.encode())
		userResponse = sock.recv(1024).decode()
		if userResponse[:2] == 'OK':
			with open(filename, 'rb') as f:
				bytesToSend = f.read(1024)
				sock.send(bytesToSend)
				while bytesToSend != '':
					bytesToSend = f.read(1024)
					sock.send(bytesToSend)
	else:
		sock.send('ERR'.encode())

	sock.close()

def Main():
	host = '127.0.0.1'
	port = 5002

	s = socket.socket()
	s.bind((host, port))

	s.listen(5)

	print('Server started.')
	while True:
		c, addr = s.accept()
		print('client connected ip:<' + str(addr) + '>')
		t = threading.Thread(target = RetrFile, args = ('retrThread', c))
		t.start()

	s.close()

if __name__ == '__main__':
	Main()