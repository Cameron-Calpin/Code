switch = dict(
	one = 'one',
	two = 'true',
	three = 'three'
)
var = 'four' # four isn't listed in the switch case

print(switch.get(var, 'default')) # since four isn't found, default
								  # will be printed instead
