list = [1,2,3,4,5,6,7,8,9]

# the loop iterates by one until it hits 7; then stops.
for int in list:
	if int == 7:
		break
	else:
		print(int, end=' ')

print('\n')

# once the loop hits 7, it will continue to 9.
# after the loop has finished, the else will print
for int in list:
	if int == 7:
		continue
	else:
		print(int, end=' ')
else:
	print('default')