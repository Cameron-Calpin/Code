Input = open('text.txt', 'r') # r is for read (append)
Output = open('new.txt', 'w') # w is for write 

for line in Input:
	# prints the text in text.txt and copies to
	# new.txt
	print(line, file = Output, end='')

