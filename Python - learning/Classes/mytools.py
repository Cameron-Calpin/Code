# Lister can be mixed-in to any class, to
# provide a formatted print of instances
# via inheritance or __repr__ coded here;
# self is the instance of the lowest class;

class Lister:
	def __repr__(self):
		return ("<Instance of %s, address %s:\n%s>" % 
			(self.__class__.__name__, 		# my class's name
			self.supers(),					# my class's supers
			id(self), 						# my address
			self.attrnames()) )				# name=value list

	def attrnames(self):
		result = ''
		for attr in self.__dict__.keys():		# scan instance namespace dict
			if attr[:2] == '__':
				result = result + "\tname %s=<built-in>\n" % attr
			else:
				result = result + "\tname %s=%s\n" % (attr, self.__dict__[attr])
		return result

	def supers(self):
		result = ""
		first = 1
		for super in self.__class__.__bases__:	# one level up from class
			if not first:
				result = result + ", "
			first = 0
			result  = result + super.__name__
		return result