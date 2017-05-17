buffersize = 100000
Input = open('bigfile.txt', 'r')
Output = open('newbigfile.txt', 'w')
buffer = Input.read(buffersize)
bufferlimit = 1000000

while bufferlimit > 0:
	Output.write(buffer)
	print('.', end='')
	bufferlimit -= buffersize

while len(buffer):
	Output.write(buffer)
	print('.', end='')
	buffer = Input.read(buffersize)