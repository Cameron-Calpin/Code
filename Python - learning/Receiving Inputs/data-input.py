data = input('What\'s your name?\n')

print('Hello, {}'.format(data), '\n')

data2 = input('What\'s your favorite number?\n')
# have to concatenate data2, b/c it was a string
data2 = int(data2) * 20
print('Your number times 20 is {}'.format(data2))

