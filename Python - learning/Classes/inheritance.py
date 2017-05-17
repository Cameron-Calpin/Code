class Animals:
	def eat(self):
		print('I can eat')
	def talk(self):
		print('I can talk')

# parameter inherits methods from Animals
class Cat(Animals):
	def talk(self):
		print('meow')
	def move(self):
		print('I can move')

class Dog(Animals):
	#def talk(self):
	#	print('woof')
	pass

muffin = Cat()
sky = Dog()

muffin.talk() # overrides the default function in Animals
muffin.move()
muffin.eat()
sky.talk()
