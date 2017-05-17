def gender(sex):
	list = ['Male', 'male', 'Female', 'female']
	for i in range(len(list)):
		if sex in list[i]:
		    print('I didn\'t catch that, Male or Female?')
		    gender(input())
		else:
			print('You are {}'.format(sex))
			exit()

derp = input('Are you male or female?\n')
gender(derp)
