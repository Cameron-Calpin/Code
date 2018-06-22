some_dict = {'zope':'zzz', 'python':'rocks'}
another_dict = {'python':'rocks', 'perl':'$'}

# Slow approach
# intersect = []
# for item in some_dict.keys():
# 	if item in another_dict.keys():
# 		intersect.append(item)
# print "Intersects:", intersect


# Fast approach
intersect = []
for item in some_dict.keys():
	if another_dict.has_key(item):
		intersect.append(item)
print "Intersects:", intersect


# Gets keys from both dict
def union_keys(dict1, dict2):
	temp_dict = dict1.copy()
	temp_dict.update(dict2)
	return temp_dict.keys()



print "Intersects:", [k for k in some_dict if k in another_dict]

print "Intersects:", filter(another_dict.has_key, some_dict.keys())


print union_keys(some_dict, another_dict)