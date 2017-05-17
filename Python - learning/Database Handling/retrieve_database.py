import sqlite3

db = sqlite3.connect('database.db')
# to retrieve dictionaries and values
#db.row_factory = sqlite3.Row
# retrieve data (* means all)
table = db.execute('select * from person')
# To retrieve first name and secondname only
#table = db.execute('select firstname, secondname from person')
# don't need commit because we're not changing data
for each in table:
	# also print(dict(each)) for showing dictionaries
	print(each)
	# display value of dictionary
	#print(each['firstname'])