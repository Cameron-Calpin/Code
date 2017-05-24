import sqlite3, os, sys

class database_log:
	def write(self):
		db = sqlite3.connect('log_message.db')
		cur = db.cursor()

		choice = input('Would you like to write a message? [y/n]')
		if choice == 'y':
			cur.execute('DROP TABLE IF EXISTS files')
			message = input('Enter message: ')
			cur.execute('CREATE TABLE files (fileName TEXT, msg TEXT)')
			cur.execute('INSERT INTO files (fileName, msg) VALUES (?, ?)', (str(file_name), (str(message))))
			db.commit()
		else:
			cur.execute('DROP TABLE IF EXISTS files')
			message = ''
			cur.execute('CREATE TABLE files (fileName TEXT, msg TEXT)')
			cur.execute('INSERT INTO files (fileName, msg) VALUES (?, ?)', (str(file_name), (str(message))))
			db.commit()

	def read(self):
		db = sqlite3.connect('log_message.db')
		cur = db.cursor()
		
		Files = cur.execute('SELECT * FROM files')
		for each in Files:
			print(each)
		choose_file = input('What file do you want to read?\n')
		db.execute('select ')

log = database_log()

while True:
	choice = input('Hello, do you want:\n a) new file\n b) read file\n c) Exit')
	if choice == 'a':
		file_name = input('File Name: ')
		log.write()
	elif choice == 'b':
		log.read()
	elif choice == 'c':
		sys.exit()
