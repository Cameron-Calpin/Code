from ftplib import FTP 

ftp = FTP('localhost')
ftp.login(user = 'Cameron', passwd = '21')
ftp.cwd('C:/Users/Cameron/Desktop/')

def grabFile():
	filename = 'filename.txt'
	localfile = open(filename, 'wb')
	tfp.retrbinary('RETR ' + filename, localfile.write, 1024)
	ftp.quit()
	localfile.close()

def placeFile():
	filename = 'filename.txt'
	ftp.storebinary('STOR ' + filename, open(filename, 'rb'))
	ftp.quit()