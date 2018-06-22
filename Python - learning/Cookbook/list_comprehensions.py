theoldlist = [1, 2, 3, 4, 5, 6, 7]
thenewlist = []

thenewlist = map(lambda x: x + 23, theoldlist)
print thenewlist

thenewlist = [x + 23 for x in theoldlist]
print thenewlist

thenewlist = filter(lambda x: x > 5, theoldlist)
print thenewlist

thenewlist = [x for x in theoldlist if x > 5]
print thenewlist

thenewlist = map(lambda x: x + 23, filter(lambda x: x > 5, theoldlist))
print thenewlist

thenewlist = [x + 23 for x in theoldlist if x > 5]
print thenewlist