tuple = (1,2,3,4,5)


# no exception will be thrown. tuple will 
# be printed.
try:
	#tuple.append(6)
	for each in tuple:
		print(each)
except AttributeError as e:
	print('Error formed: ' , e)

print('\n')

# exception will be caught first. Does not
# print out tuple.
try:
	tuple.append(6)
	for each in tuple:
		print(each)
except AttributeError as e:
	print('Error formed: ' , e)
except IOError as e:
	print('File not found: ' , e)

