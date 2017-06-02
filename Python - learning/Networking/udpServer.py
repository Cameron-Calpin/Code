import socket

def Main():
	host = '127.0.0.1'
	port = 5003
	# udp style sending data grams (DGRAM)
	s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	s.bind((host, port))

	print('Server started.')
	while True:
		data, addr = s.recvfrom(1024)
		Data = data.decode()
		print('message from: ' + str(addr))
		print('from connected user: ' + str(Data))

		data = str(Data).upper()
		print('sending: ' + str(data))
		s.sendto(data.encode(), addr)

	s.close()
if __name__ == '__main__':
	Main()