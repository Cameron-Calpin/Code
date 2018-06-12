class Spam:
	def doit(self, message):
		print message

object1 = Spam()
x = object1.doit		# bound method object	
x('hello world')		# instance is implied

t = Spam.doit			# unbound method object
t(object1, 'howdy')		# pass in instance