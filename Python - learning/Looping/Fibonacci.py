# take input from user
nterms = int(input('How many terms? '))

# first two terms
n1 = 0
n2 = 1
count = 2

# check if the number of terms is valid
if nterms <= 0:
	print('Please enter a positive integer')
elif nterms == 1:
	print('Fibonacci sequanes upto ', nterms, ':')
	print(n1)
else:
	print('Fibonacci sequence upto ', nterms, ':')
	print(n1, ',', n2, end=', ')
	while count < nterms:
		nth = n1 + n2
		print(nth, end=', ')
		# update values
		n1 = n2
		n2 = nth
		count += 1