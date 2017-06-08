class BaseClass(object):
	def printHam(self):
		print 'ham'

class InheritingClass(BaseClass):
	pass

# x is an instance of the class
x = InheritingClass()
#

#BaseClass.printHam()

x.printHam()


