import string
words = string.split(open('myfile.txt').read())

def at_least_ten(word):
	return len(word) >= 10

longwords = filter(at_least_ten, words)
print "longwords:", longwords

lines = open('myfile.txt').readlines()
lines = filter(None, lines)
print "lines:", lines