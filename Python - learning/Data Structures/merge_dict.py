def mergeWithoutOverlap(oneDict, otherDict):
	newDict = oneDict.copy()
	for key in otherDict.keys():
		if key in oneDict.keys():
			raise ValueError, "the two dictionaries are sharing keys!"
		newDict[key] = otherDict[key]
	return newDict

def mergeWithOverlap(oneDict, otherDict):
	newDict = oneDict.copy()
	for key in otherDict.keys():
		if key in oneDict.keys():
			newDict[key] = oneDict[key], otherDict[key]
		else:
			newDict[key] = otherDict[key]
	return newDict

if __name__ == '__main__':
	phoneBook1 = {'michael': '555-1212', 'mark': '554-1121', 'emily': '556-0091'}
	phoneBook2 = {'latoya': '555-1255', 'emily': '667-1234'}

	# new_phonebook1 = mergeWithoutOverlap(phoneBook1, phoneBook2)
	new_phonebook2 = mergeWithOverlap(phoneBook1, phoneBook2)

	# print new_phonebook1
	print new_phonebook2