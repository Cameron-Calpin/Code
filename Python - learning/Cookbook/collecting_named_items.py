''' Using kwargs as a convention to pass x amount
	of arguments '''
class Bunch:
	def __init__(self, **kwargs):
		self.__dict__.update(kwargs)

class EvenSimplerBunch:
	def __init__(self, **kwargs):
		self.__dict__ = kwargs

class MurkierBunch(dict):
	def __init__(self, **kwargs):
		dict.__init__(self, kwargs)
	__getattr__ = dict.__getitem__
	__setattr__ = dict.__setitem__
	__delattr__ = dict.__delitem__




''' __name__ attribute is assigned to '__main__',
	run program '''
if __name__ == '__main__':
	y = 5
	x = 3
	threshold = 20

	instance = Bunch(name="Cam", age=24)
	point 	 = Bunch(datum=y, squared=y*y, coord=x, isok=0)

	# prints the dictionary of the class object
	print instance.__dict__

	values = []
	for n in instance.__dict__:
		 values.append(instance.__dict__[n])
	print values


	output = []
	for i in point.__dict__:
		output.append(point.__dict__[i])
	print output

	if point.squared > threshold:
		point.isok = 1
	print point.isok

	instance2 = MurkierBunch(name="Cam", age=22)

	print "instance 2 dict values:", instance2
	del instance2.age
	print "instance2 dict values after deletion:", instance2.__dict__



