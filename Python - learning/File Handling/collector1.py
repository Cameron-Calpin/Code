import sys, string

entries = {}
for line in open(sys.argv[1], 'r').readlines():
	# print string.split(line)
	left, right = string.split(line)
	try:
		entries[right].append(left)
	except KeyError:
		entries[right] = [left]
		# for x in entries:
		# 	print x, entries[x]


for (right, lefts) in entries.items():
	print "%04d '%s'\titems => %s" % (len(lefts), right, lefts)