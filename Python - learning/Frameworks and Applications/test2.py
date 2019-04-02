import os, pickle

directory = r"/home/frostbyte/Desktop/Code/Code/Python - learning/Frameworks and Applications"
filename = "test2.txt"

print "MYPATH:", os.path.join(directory, filename)

# pickle.load(open(os.path.join(directory, filename)))

with open(r"/home/frostbyte/Desktop/Code/Code/Python - learning/Frameworks and Applications/test2.txt", "rb") as f:
	data = pickle.load(f) 