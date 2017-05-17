# string = ['s', 't', 'r', 'i', 'n', 'g']
string = 'This is a string of text, in a variable called string'

print(string)

for letter in string:
	print(letter, end='')

print('\n')

print(string.count('is')) # 2 because in 'This' and 'is'
print(len(string)) 	# 53 characters

string2 = 'capitalize'
print(string2.capitalize())