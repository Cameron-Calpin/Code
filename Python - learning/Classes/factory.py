def factory(aClass, *args):			# varargs tuple
	return apply(aClass, args)		# class aClass

class Spam:
	def doit(self, message):
		print message

class Person:
	def __init__(self, name, job):
		self.name = name
		self.job  = job

object1 = factory(Spam)							# make a Spam
object2 = factory(Person, "Guido", "guru")		# make a Person