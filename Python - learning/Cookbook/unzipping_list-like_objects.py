def unzip(p, n):
	""" Split a sequence p into a list of n tuples,
		repeatedly taking the next unused element of
		p and adding it to the next tuple. Each of
		the resulting tuples is of the same length;
		if p % n != 0, the shorter tuples are padded
		with None (closer to the behavior of map than
		to that of zip).
			Example:
			>>> unzip(['a','b','c','d','e'], 3)
			[('a', 'd'), ('b', 'e'), ('c', None)]
	"""

	# First, find the length for the longest sublist
	mlen, lft = divmod(len(p), n)
	if lft != 0: mlen += 1

	# Then, initialize a list of lists with suitable lengths
	lst = [[None]*mlen for i in range(n)]

	# Loop over all items of the input sequence (index-wise),
	# and copy a reference to each into the appropriate place
	for i in range(len(p)):
		j, k = divmod(i, n)		# Find sublilst-index and index-within-sublist
		lst[k][j] = p[i]		# Copy a reference appropriately

	# Finally turn each sublist into a tuple, since the unzip function
	# is specified to return a list of tuples, not a list of lists
	return map(tuple, lst)

if __name__ == "__main__":
	lst = ['a', 'b', 'c', 'd', 'e']
	print unzip(lst, 3)
