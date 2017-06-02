import datetime

start = datetime.datetime.now()

print(start)

i = 0
while i < 1000000:
	i = i + 1
	print(i)

end = datetime.datetime.now()

print(end - start)