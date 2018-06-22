def adder0(**kwargs):
	sum = 0
	for x in kwargs.keys():
		sum = sum + kwargs[x]
	return sum

print adder0(good=1, bad=2, ugly=3)

# ---------------------------------------------

def adder1(good, bad, ugly):
	return good + bad + ugly

kwargs = { 'good': 1, 'bad': 2, 'ugly':3 }
print adder1(**kwargs)

# ---------------------------------------------

def adder2(good=1, bad=2, ugly=3):
	return good + bad + ugly

print adder2()
print adder2(5)
print adder2(5, 6, 7)