Found = "Item Found"

def searcher():
	if True:
		raise Found
	else:
		return

try:
	searcher()
except Found:
	raise Founf
else:
	print "Item not found"
