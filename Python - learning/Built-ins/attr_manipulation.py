def increment_attribute(object, attrname):
	if not hasattr(object, attrname):
		setattr(object, attrname, 1)
	else:
		setattr(object, attrname, getattr(object, attrname) + 1)

class Test: pass

if __name__ == '__main__':
	aname = 'foo'
	increment_attribute(Test, aname)
	increment_attribute(Test, aname)
	print "Value of Test.foo: %s" % Test.foo