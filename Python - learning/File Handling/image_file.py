buffersize = 100000
Input = open('pepe.jpg', 'rb') # read binary
Output = open('image2.jpg', 'wb') # write binary
buffer = Input.read(buffersize)
bufferlimit = 1000000

while len(buffer):
	print('.', end='')
	buffer = Input.read(buffersize)