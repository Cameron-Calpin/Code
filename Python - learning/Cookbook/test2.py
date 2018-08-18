animals = []
number_of_felines = 0

def deal_with_a_cat():
	global number_of_felines
	print "meow"
	animals.append('feline')
	number_of_felines += 1

def deal_with_a_dog():
	print "bark"
	animals.append('canine')

def deal_with_a_bear():
	print "watch out for the *HUG*!"
	animals.append('ursine')

tokenDict = {
	"cat": deal_with_a_cat,
	"dog": deal_with_a_dog,
	"bear": deal_with_a_bear
}

# Simulate, say, some words read from a file
words = ["cat", "bear", "cat", "dog"]

for word in words:
	# Look up the function to call for each word, then call it
	functionToCall = tokenDict[word]
	functionToCall()

print number_of_felines
