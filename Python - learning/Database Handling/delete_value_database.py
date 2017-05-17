import sqlite3

db = sqlite3.connect('database.db')
db.execute('delete from person where age < 18')
db.commit()
table = db.execute('select * from person')
for each in table:
	print(each)