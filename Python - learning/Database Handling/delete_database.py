import sqlite3

db = sqlite3.connect('database.db')
table = db.execute('delete from person where secondname = "Calpin"')
db.commit()