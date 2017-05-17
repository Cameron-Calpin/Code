
while True:
	ID = input('Enter your ID: ')
	if len(ID) != 14:
		print('ID needs to be 14 characters long, try again')
	else:
		break


while True:
	Key = input('Enter your Key: ')
	if len(Key) < 10 or len(Key) > 20:
		print('Key needs to be 10-20 characters long')
	else:
		break

ID = '%s:' % ID
Tag = ID + Key
print('Your Identification: \n', Tag)


