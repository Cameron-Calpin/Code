def file_read():
	filename = input('Name file: ')
	with open(filename, 'w') as myFile:
		myFile.write(input())

file_read()