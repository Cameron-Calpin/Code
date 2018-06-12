import sys, string

def collect(file):
	entries = {}
	for line in file.readlines():
		left, right = string.split(line)
		try:
			entries[right].append(left)
		except KeyError:
			entries[right] = [left]
	return entries

if __name__ == "__main__":
	if len(sys.argv) == 1:
		result = collect(sys.stdin)
	else:
		result = collect(open(sys.argv[1], 'r'))
	for (right, lefts) in result.items():
		print "%04d '%s'\titems => %s" % (len(lefts), right, lefts)
