#include "types.h"
#include "stat.h"
#include "user.h"


int main(int argc, char *argv[])
{

  printf(1, "Program 3 tickets: %d\n", settickets(10));
  int i,k;
  const int loop=43000;
  for(i=0;i<loop;i++) {
    asm("nop");  
    for(k=0;k<loop;k++) {
      asm("nop");
    }

  }

  //sleep(5); 
 // printf(1, "Program 3 ticks : %d\n", getticks()); 
  exit();
}                       
