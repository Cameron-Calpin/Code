
class General:
	pass

class Specific(General):
	pass

def raiser1():
	X = General()
	raise X

def raiser2():
	X = Specific()
	raise X

for func in (raiser1, raiser2):
	try:
		func()
	except General:
		import sys
		print 'caught:', sys.exc_type