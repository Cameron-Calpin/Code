mytuple = ('one', 'two', 'three')

listcopy = list(mytuple)
listcopy.sort()
for item in listcopy:
	print item

myDict = {'one': 1, 'two': 2, 'three': 3}

keys = myDict.keys()

keys.sort()
for key in keys:
	print key, myDict[key]