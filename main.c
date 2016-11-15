#include <stdlib.h>
int main(){
  system("/usr/sbin/sshd -D");
  system("ps -aux");
  while(1);
}
