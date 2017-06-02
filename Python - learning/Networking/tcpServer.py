import socket

def Main():
	host = '127.0.0.1'
	port = 5010

	#creates a socket object
	s = socket.socket()
	# bind the socket to a port
	s.bind((host, port))

	s.listen(1)
	c, addr = s.accept()
	print('Connection from: ' + str(addr))

	while True:
		# recieve max buffer of 1024 bytes
		data = c.recv(1024).decode()
		if not data:
			break
		print('from connected user: ' + str(data))

		data = str(data).upper()
		print('sending: ' + str(data))
		c.send(data.encode())
	c.close()

if __name__ == '__main__':
	Main()