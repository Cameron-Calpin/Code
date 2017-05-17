import sys, os, glob

class LogMessage:
	def __init__(self, *Name):
		self.Name = Name
	def write(self):
		self.Name = input('Name file: ')
		with open(self.Name, 'w') as myFile:
			myFile.write(input('Log your messsage here: '))
			print(myFile)
		return self.Name

	def read(self):
		myFile = open(self.Name, 'r')
		for line in myFile:
			print(line)

	def justRead(self, file):
		myFile = open(file, 'r')
		for line in myFile:
			print(line, end='')

		
message = LogMessage()
choice = input('Hello, do you want:\n a) new file\n b) read file')
if choice == 'a': 
	message.write()
	choice2 = input('Do you want to read the message? [y/n]')
	if choice2 == 'y':
		message.read()
	else:
		sys.exit()
elif choice == 'b':
	os.chdir('C:/Users/Cameron/Desktop/Code/Python - learning/File Handling')
	for file in glob.glob('*'):
		print(file)
	choose_file = input('\nWhat file do you want to read?\n')
	# convert tuple into string
	msg = ''.join(choose_file)
	message.justRead(msg)