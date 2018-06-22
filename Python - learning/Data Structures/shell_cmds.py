import string, sys, os, shutil, cmd

class shell_cmds(cmd.Cmd):
	def do_EOF(self, line):
		sys.exit()

	def help_ls(self):
		print "List the current directory."
	def do_ls(self, line):
		if line == '':
			dirs = [os.curdir]
		else:
			dirs = string.split(line)
		for dirname in dirs:
			print 'Listing of %s:' % dirname
			print string.join(os.listdir(dirname), '\n')

	def help_cd(self):
		print "Change the directory."
	def do_cd(self, dirname):
		if dirname == '':
			dirname = os.environ['HOME']
		os.chdir(dirname)

	def do_mkdir(self, dirname):
		os.mkdir(dirname)

	def help_mv(self):
		print "Move or rename file."
	def do_mv(self, line):
		src, dst = string.split(line)
		os.rename(src, dst)

	def help_cp(self):
		print "Copy a file or directory."
	def do_cp(self, line):
		words = string.split(line)
		sourcefiles, target = words[:-1], words[-1]
		print sourcefiles
		for sourcefile in sourcefiles:
			shutil.copy(sourcefile, target)

	def do_rm(self, line):
		map(os.remove, string.split(line))

class DirectoryPrompt:
	def __repr__(self):
		return  os.getcwd() + '> '
		

shell = shell_cmds()
shell.prompt = DirectoryPrompt()
shell.cmdloop()