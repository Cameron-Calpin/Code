def data_type(data):
	if type(data) == str and any(char.isdigit() for char in data):
		return 'alphanumeric'
	elif type(data) == int:
		return 'Digit Only'
	else:
		return 'Boolean'

var1 = 'string'
var2 = 123
var3 = 'abc123'

print(data_type(var1))
print(data_type(var2))
print(data_type(var3))
