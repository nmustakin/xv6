#include "types.h"
#include "user.h"

int main(int argc, char* argv[]){

  printf(1, "Checkpoint 1 before fork\n");

  int pid = fork();

  if(pid == 0){
    printf(1, "Checkpoint 2 In child process\n");
    int tickets = settickets(30); 
    printf(1, "Child process tickets %d\n", tickets); 
  }
  else{
    printf(1, "Checkpoint 2 In Parent process\n");
    int tickets = settickets(50); 
    printf(1, "Child process tickets %d\n", tickets); 
  }  
  
  exit(); 

  return 0; 
}
