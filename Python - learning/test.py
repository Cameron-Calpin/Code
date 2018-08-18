theIndex = {}
# def addword(word, pagenumber):
# 	if theIndex.has_key(word):
# 		theIndex[word].append(pagenumber)
# 	else:
# 		theIndex[word] = [pagenumber]

def addword2(word, pagenumber):
	try:
		theIndex[word].append(pagenumber)
	except AttributeError:
		theIndex[word] = [pagenumber]

def addword3(word, pagenumber):
	theIndex.setdefault(word, []).append(pagenumber)

def contWords(word):
	return len(theIndex.get(word, 0))

def duplicate(key, index):
	theIndex.setdefault(key, {})[index] = 1

def has_key_with_some_values(d, key):
	return d.has_key(key) and d[key]

def get_values_if_any(d, key):
	return d.get(key, {})

if __name__ == '__main__':
	addword3("hello", 3)
	addword3("hi", 5)
	addword3("hello", 9)

	# print contWords("hello")

	# print theIndex
	# duplicate("hello", 1)
	# print theIndex

	# print get_values_if_any(theIndex, "hello")

	# print theIndex.keys()[1]
	# print theIndex.get("hello", 0)

	example = {}
	example.setdefault('a', {})['apple'] = 1
	example.setdefault('b', {})['boots'] = 1
	example.setdefault('c', {})['cat'] = 1
	example.setdefault('a', {})['ant'] = 1
	example.setdefault('a', {})['apple'] = 1

	for i in example.items():
		print i



# -------------------------------------------------


