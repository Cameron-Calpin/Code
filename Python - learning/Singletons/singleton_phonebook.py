def Singleton(myClass):
	instances = {}
	def GetInstance(*args, **kwargs):
		if myClass not in instances:
			instances[myClass] = myClass(*args, **kwargs)
		return instances[myClass]
	return GetInstance

@Singleton
class PhoneboookManager(object):
	def __init__(self):
		self.myDict = {}
	def AddEntry(self, name, number, *args, **kwargs):
		self.myDict[name] = number
	def GetEntry(self, name, *args, **kwargs):
		if name in self.myDict.keys():
			return self.myDict[name]
		return '000-000-0000'

if __name__ == '__main__':
	pm = PhoneboookManager()
	pm.AddEntry('Cam', '123-685-9345')
	pm2 = PhoneboookManager()
	print pm.GetEntry('Cam')
	print pm2.GetEntry('timothy')