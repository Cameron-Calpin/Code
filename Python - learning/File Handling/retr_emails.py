import poplib
import email


SERVER = "pop.gmail.com"   
USER = "camcalone@gmail.com"
PASSWORD = "Eaglescout#14"
 

server = poplib.POP3_SSL(SERVER)
server.user(USER)
server.pass_(PASSWORD)
 
 
numMessages = len(server.list()[1])
if (numMessages > 15):
    numMessages=15
for i in range(numMessages) :
    (server_msg, body, octets) = server.retr(i+1)
    for j in body:
        try:
            msg = email.message_from_string(j.decode("utf-8"))
            strtext=msg.get_payload()
            print (strtext)
        except:
            pass