import sqlite3, os

class database_log:
	def __init__(self, file_name):
		self.file_name = file_name
	def write(self):
		db = sqlite3.connect('log_message.db')
		file_name = input('File Name: ')
		db.execute('create table files (fileName text)')
		db.execute('insert into files (fileName text) values (%s)', file_name)

		choice = input('Would you like to write a message? [y/n]')
		if choice == 'y':
			db.execute('create table message (msg text)')
			Message = input('Type your message:\n')
			db.execute('insert into message (msg text) values (%s text)', Message)
		else:
			sys.exit()

	def read(self):
		db = sqlite3.connect('log_message.db')
		Files = db.execute('select * from files')
		for each in Files:
			print(each)
		choose_file = input('What file do you want to read?\n')
		db.execute('select ')

log = database_log()
while True:
	choice = input('Hello, do you want:\n a) new file\n b) read file c) Exit')
	if choice == 'a':
		log.write()
	elif choice == 'b':
		File = insert('What file do you want to read?')
		
	elif choice == 'c':
		sys.exit()
