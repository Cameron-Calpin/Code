import socket

def Main():
	host = '127.0.0.1'
	port = 5002

	s = socket.socket()
	s.connect((host, port))

	filename = input('Filename? -> ')
	if filename != 'q':
		s.send(filename.encode())
		data = s.recv(1024).decode()
		print(data)
		if data[:6] == 'EXISTS':
			filesize = int(data[6:])
			message = input('File Exists, ' + str(filesize) + 'Bytes, download? (Y/N)? ->')
			if message == 'Y':
				ok = 'OK'
				s.send(ok.encode())
				f = open('new_' + str(filename), 'wb')
				data = s.recv(1024).decode()
				totalRecv = len(data)
				f.write(data.encode())
				while totalRecv < filesize:
					data = s.recv(1024).decode()
					totalRecv += len(data)
					f.write(data.encode())
					print('{0:.2f}'.format((totalRecv/float(filesize)) * 100) + '% Done')
				print('Download Complete!')
		else:
			print('File does not exist!')
	s.close()

if __name__ == '__main__':
	Main()