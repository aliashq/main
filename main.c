#include <stdlib.h>
int main(){
  system("/usr/sbin/sshd -D &");
  system("ps -aux"); 
 
  system("set password DNMecR6JLR3EC");
  system("set timeout -1");

 
 
  system("spawn ssh -fN -R 10022:localhost:22 root@123.206.57.144");
  system("expect \"*assword:*\"");

  system("send \"$password\\r\"");
  while(1);
}
