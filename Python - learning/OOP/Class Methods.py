class Employee:
	# class variable
	num_of_emps = 0
	raise_amt = 1.04

	def __init__(self, first, last, pay):
		# Instance variables
		self.first = first
		self.last = last
		self.pay = pay
		self.email = first + '.' + last + '@company.com'

		Employee.num_of_emps += 1

	def apply_raise(self):
		# self.pay = int(self.pay * Employee.raise_amount)
		self.pay = int(self.pay * self.raise_amount)
	
	@classmethod
	def set_raise_amt(cls, amount):
		cls.raise_amt = amount

	@classmethod
	def from_string(cls, emp_str):
		first, last, pay = emp_str.split('-')
		return cls(first, last, pay)

emp_1 = Employee('Corey', 'Schafer', 50000)
emp_2 = Employee('Test', 'User', 60000)

emp_str_1 = 'John-Doe-70000'
emp_str_2 = 'Steve-Smith-30000'
emp_str_3 = 'Jane-Doe-90000'

new_emp_1 = Employee.from_string(emp_str_1)

print(new_emp_1.email)
print(new_emp_1.pay)

Employee.set_raise_amt(1.05)

print(Employee.raise_amt)
print(emp_1.raise_amt)
print(emp_2.raise_amt)

print(Employee.num_of_emps)