class Iterate(object):
	_instance = None
	def __new__(self, *args, **kwargs):
		if not self._instance:
			self._instance = super(Iterate, self).__new__(self)
			self.value = 0
		self.value += 1
		return self._instance

num = Iterate()
print num