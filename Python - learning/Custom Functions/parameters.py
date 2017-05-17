list1 = [1,2,3,4]

def function_name(lists):
	"This will simply demonstrate reference"
	lists.append([5,6,7,8])
	return

print('The values are:', list1)
function_name(list1)
print('The new valeus are:', list1)