#include "types.h"
#include "stat.h"
#include "user.h"


int main(int argc, char *argv[])
{

  printf(1, "Program 1 tickets: %d\n", settickets(30));
  int i,k;
  const int loop=43000;
  for(i=0;i<loop;i++) {
    asm("nop");
    for(k=0;k<loop;k++) {
      asm("nop");
    }
    if(i%1000 == 0) getticks(); 
  }
  //sleep(10); 
  //printf(1, "Program 1 ticks: %d\n", getticks()); 
  exit();
}
