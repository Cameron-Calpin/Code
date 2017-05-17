# The equation goes as follows:
#	((A&~B)|C) = Q		A and not B or C = Q


# (1 & ~(1)) | 1
if 1 and not 1 or 1:
	print(True)
else:
	print(False)

# (1 & ~(0)) | 1
if 1 and not 0 or 1:
	print(True)
else:
	print(False)

# (1 & ~(1)) | 0
if 1 and not 1 or 0:
	print(True)
else:
	print(False)

# (1 & ~(0)) | 0
if 1 and not 0 or 0:
	print(True)
else:
	print(False)

# (0 & ~(1)) | 0
if 0 and not 1 or 0:
	print(True)
else:
	print(False)

# (0 & ~(0)) | 1
if 0 and not 0 or 1:
	print(True)
else:
	print(False)

# (0 & ~(0)) | 0
if 0 and not 0 or 0:
	print(True)
else:
	print(False)

# (0 & ~(1)) | 1
if 0 and not 1 or 1:
	print(True)
else:
	print(False)