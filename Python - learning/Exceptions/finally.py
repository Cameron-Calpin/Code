def divide(x, y):
	return x / y

def tester(y):
	try:
		print divide(8, y)
	finally:
		print 'on the way out...'

print '\nTest 1:'; tester(2)
print '\nTest 2:'; tester(0)