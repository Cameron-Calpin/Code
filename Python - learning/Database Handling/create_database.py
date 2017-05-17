import sqlite3

db = sqlite3.connect('database.db')
# if there's already a table, just dublicates it.
db.execute('drop table if exists person')
db.execute('create table person (firstname text, secondname text, age int)')
db.execute('create table people (firstname text, secondname text, age int)')