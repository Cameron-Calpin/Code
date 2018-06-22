class Animal:
	def __init__(self, animalName):
		print(animalName, 'is an animal name.')

class Mammal(Animal):
	def __init__(self, mammalName):
		print(mammalName,'is a warm-blooded animal.')
		super().__init__(mammalName)

class NonWingedMammal(Mammal):
	def __init__(self, NonWingedMammal):
		print(NonWingedMammal,'can\'t fly.')
		super().__init__(NonWingedMammal)

class NonMarineMammal(Mammal):
	def __init__(self, NonMarineMammal):
		print(NonMarineMammal,'can\'t swim.')
		super().__init__(NonMarineMammal)

class Dog(NonMarineMammal, NonWingedMammal):
	def __init__(self):
<<<<<<< HEAD
		print('Dog has 4 legs.')      
=======
		print('Dog has 4 legs.')
>>>>>>> 98940185dbdc544539742f2f6e1ed2d9e9bdb18c
		super().__init__('Dog')

d = Dog()
print('')
bat = NonMarineMammal('bat')