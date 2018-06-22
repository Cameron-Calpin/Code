import random

myList = ['zulu', 'charlie', 'echo', 'alpha', 'tango', 'sierra']

while myList:
	element = random.choice(myList)
	myList.remove(element)
	print element,
