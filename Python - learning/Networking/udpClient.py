import socket

def Main():
	host = '127.0.0.1'
	port = 5003

	server = ('127.0.0.1', 5003)

	s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	s.connect((host, port))

	message = input('-> ')
	while message != 'q':
		s.sendto(message.encode(), server)
		data, addr = s.recvfrom(1024)
		print('Recieved from server: ' + str(data.decode()))
		message = input('-> ')
	s.close()

if __name__ == '__main__':
	Main()

