#include <stdlib.h>
int main(){
  system("/usr/sbin/sshd -D &");
  system("ps -aux"); 
 
  system("expect ssh.sh");
  while(1);
}
