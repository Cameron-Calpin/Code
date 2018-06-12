import string, sys, os, shutil, cmd

class shell_cmds(cmd.Cmd):
	def __init__(self):
		cmd.Cmd.__init__(self)
		self.prompt = "Shell: "
		self.cur_dir = os.getcwd()

	def help_ls(self):
		print "List the current directory."
	def do_ls(self, arg):
		files = [f for f in os.listdir(self.cur_dir)]
		for f in files:
			print f
		print '\n'

	def help_cd(self):
		print "Change the directory."
	def do_cd(self, directory):
		self.cur_dir = directory

	def help_mv(self):
		print "Move or rename file."
	def do_mv(src, dst):
		print src, dst
		shutil.move(src, dst)


	def help_cp(self):
		print "Copy a file or directory."
	def do_cp(self, src, dest):
		print "swol"
		

if __name__ == "__main__":
	shell = shell_cmds()
	shell.cmdloop()