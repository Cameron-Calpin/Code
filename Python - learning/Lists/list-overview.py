list = [1,2,3,4,5,6,7,8,9,10,11]

print(list[3])

length = len(list)
print(list[length - 4])

print(list[2:5])

# starts at 2 and iterates by 2 and reaches index 10
print(list[2:10:2])

# starts at 2 and iterates by 2
print(list[2::2])

# starts at beginning of list and iterates by 2
print(list[::2])