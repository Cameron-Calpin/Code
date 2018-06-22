MyError = 'hello'

def oops():
	raise MyError, 'world'

if __name__ == '__main__':
	oops()