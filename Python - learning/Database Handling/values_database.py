import sqlite3

db = sqlite3.connect('database.db')
db.execute('insert into person (firstname, secondname, age) values ("Nay", "Nay", 13)')
db.commit()
