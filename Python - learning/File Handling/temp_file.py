import tempfile, os

file_descriptor, file_path = tempfile.mkstemp(suffix='.tmp', dir=os.getcwd())

# with os.fdopen(file_descriptor, 'w') as open_file:
#     open_file.write('hello')

inputFile = open(file_path, 'w')
inputFile.write('hello')
inputFile.close()

