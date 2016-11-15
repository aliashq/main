#!/usr/bin/expect -f

#set port port_no
#set user user_name
#set host host_name
set password DNMecR6JLR3EC
set timeout -1

spawn ssh -fN -R 10022:localhost:22 root@123.206.57.144
expect "*assword:*"

send "$password\r"
expect eof
