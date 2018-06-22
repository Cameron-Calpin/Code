class Stack:
	def __init__(self, data):
		self._data = list(data)
	def push(self, item):
		self._data.append(item)
	def pop(self):
		item = self._data[-1]
		del self._data[-1]
		return item
	def get(self):
		return self._data