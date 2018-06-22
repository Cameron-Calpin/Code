def echo(message):
	print message

schedule = [(echo, 'Spam!'), (echo, 'Ham!')]
for (func, arg) in schedule:
	apply(func, (arg,))