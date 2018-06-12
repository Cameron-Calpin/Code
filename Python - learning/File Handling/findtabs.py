# find files, search for tabs

import string, os
cmd = 'dir /s /b *.py | findstr /v .py.'

for file in os.popen(cmd).readlines():
	num = 1
	name = file[:-1]		# strips \n
	for line in open(name).readlines():
		pos = string.find(line, '\t')
		if pos >= 0:
			print name, num, pos
			print '....', line[:-1]
			print '....', ' '*pos + '*', '\n'
		num = num + 1