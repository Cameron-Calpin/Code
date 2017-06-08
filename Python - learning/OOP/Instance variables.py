class Employee:
	def __init__(self, first, last, pay):
		# Instance variables
		self.first = first
		self.last = last
		self.pay = pay
		self.email = first + '.' + last + '@company.com'

	def fullname(self):
		return '{} {}'.format(self.first, self.last)

	

emp_1 = Employee('Corey', 'Schafer', 50000)
emp_2 = Employee('Test', 'User', 60000)

#print(emp_1)
#print(emp_2)

print(emp_1.email)
print(emp_2.email)

print('{} {}'.format(emp_1.first, emp_2.last))

# emp_1 is the instance of self in the function fullname. If you don't have
# self as a parameter function fullname, it would give an error. Since emp_1 
# is an instance, self needs to be present in fullname.
print(emp_1.fullname())
print(Employee.fullname(emp_1))
