list = [1,2,3,4,5,6,7,8,9,10,11]

# adds 12 at end of the list
list.append(12)

# concatenates list2 at end of list
list2 = [12,13,14]
list.extend(list2)

# add 12 at index 5
list.insert(5,12)

# at index 5, change value to be multiplied by 2
list[5] = list[5] * 2

del list[5:7]
list.remove(9)

list.reverse()
list.append(0)
list.reverse()

print(list)