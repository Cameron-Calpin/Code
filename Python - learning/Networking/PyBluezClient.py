"""
A simple Python script to send messages to a server over bluetooth
using pyBluez (with Python 2)
"""

import bluetooth

serverMACAddress = 'B8:27:EB:62:20:16'
port = 3
s = bluetooth.BluetoothSocket(bluetooth.RFCOMM)
s.connect((serverMACAddress, port))
while 1:
	text = raw_input()
	if text == 'quit':
		break
	s.send(text)
s.close()