trace = 1 		# print each year

def calc(principal, interest, years):
	for y in range(years):
		principal = principal * (1.00 + (interest / 100.0))
		if trace:
			print y + 1, '=> %.2f' % principal
	return principal

def earnings(principal, interest, years):
	interest = interest / 100.0
	for y in range(years):
		earnings = principal * interest
		principal = principal + earnings
		if trace:
			print y + 1, '(+%d)' % earnings, '=> %.2f' % principal
	return principal