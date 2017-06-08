class A(object):
	# the default constructor of class A
	# self represents the instance of the object itself, which will
	# be passed automatically.
    def __init__(self):
        self.x = 'Hello'

    def printName(self):

    def method_a(self, foo):
        print self.x + ' ' + foo

a = A()
a.method_a('bleh')
print a.__init__()