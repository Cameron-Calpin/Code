from __future__ import generators

def flatten(sequence, scalarp):
	for item in sequence:
		if scalarp(item):
			yield item
		else:
			for subitem in flatten(item, scalarp):
				yield subitem

def canLoopOver(maybeIterable):
	try: iter(maybeIterable)
	except: return 0
	else: return 1

def isStringLike(obj):
	try: obj+''
	except TypeError: return 0
	else: return 1

def isScalar(obj):
	return isStringLike(obj) or not canLoopOver(obj)

if __name__ == "__main__":
	lst = [1, 2, 3, 4, 5, 6]
	sclr = "string"

	result = flatten(lst, isScalar)
	
	for x in range(len(lst)):
		print next(result)
