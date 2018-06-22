import sys, os, string
if len(sys.argv) == 1:
	filenames = os.listdir(os.curdir)
else:
	filenames = sys.argv[1:]
for filename in filenames:
	if ' ' in filename:
		newfilename = string.replace(filename, ' ', '_')
		print "Renaming", filename, "to", newfilename, "..."
		os.rename(filename, newfilename)