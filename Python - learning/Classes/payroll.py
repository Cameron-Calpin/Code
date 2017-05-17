class payroll:
	def __init__(self, name, hours):
		self.name = name
		self.hours = hours
	def display(self):
		print('Name is', self.name, ' and hours worked:', self.hours)
		print('You received $', self.hours * 7.25, 'for this pay period.')
	def overtime(self):
		if self.hours > 60:
			new_hours = self.hours - 60
			print('Overtime hours:', new_hours, 
				'\nMoney earned from overtime: $', new_hours * 3.625)
			print('Total money earned: $', (new_hours * 3.625) + (self.hours * 7.25))
		else:
			print('No hours counted for overtime.')

Employee1 = payroll('Paul', 64)
Employee1.display()
Employee1.overtime()
print('\n')
Employee2 = payroll('Kathy', 58)
Employee2.display()
Employee2.overtime()