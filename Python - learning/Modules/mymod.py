def countLines(name):
	file = open(name, 'r')
	return len(file.readlines())

def countChars(name):
	return len(open(name, 'r').read())

def test(name):
	return countLines(name), countChars(name)

if __name__ == '__main__':
	print test('mymod.py')