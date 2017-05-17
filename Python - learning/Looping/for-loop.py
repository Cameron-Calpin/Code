for data in [1,2,3,4,5]:
	print(data, end=" ")

print('\n')

for data in 'string':
	print(data, end=" ")

print('\n')

for key,data in enumerate('strings'):
	if key % 2 == 0:
		print('This letter {} is an even location'.format(data))