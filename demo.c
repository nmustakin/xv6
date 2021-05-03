#include "types.h"
#include "user.h"

int main(int argc, char* argv[]){

    printf(1, "checkpoint1\n");
   // int val = 1234/(argc - 1);
    
    printf(1, "checkpoint2\nnumber of processes:%d\n\n", info(1));
   // printf(1, "%d\n", val);
   // val++;
    
    printf(1, "checkpoint3\npage tables of current process:%d\n\n", info(2));

    printf(1, "checkpoint3a\npage tables of current process:%d\n\n", info(2));
    printf(1, "checkpoint3b\npage tables of current process:%d\n\n", info(2));
    printf(1, "checkpoint3c\npage tables of current process:%d\n\n", info(2));
    printf(1, "checkpoint3d\npage tables of current process:%d\n\n", info(2));
    printf(1, "checkpoint3e\npage tables of current process:%d\n\n", info(2));

    printf(1, "checkpoint4\nsystem calls made by current process:%d\n\n", info(3));
   // int pid1 = fork();
    settickets(30);    
    printf(1, "checkpoint4a\nsystem calls made by current process:%d\n\n", info(3));
    settickets(40);
    printf(1, "checkpoint4b\nsystem calls made by current process:%d\n\n", info(3));
    settickets(60);
    printf(1, "checkpoint4c\nsystem calls made by current process:%d\n\n", info(3));
    settickets(50);
    printf(1, "checkpoint4d\nsystem calls made by current process:%d\n\n", info(3));
   // sleep(5);
    int pid = getpid();  	
    printf(1, "checkpoint5\npage tables of current process:%d, pid:%d\n\n", info(2), pid);

    printf(1, "checkpoint6\nsystem calls made by current process:%d\n\n", info(3));
 // printf(1, "checkpoint3\n, number of processes:%d, new process ID: %d\n\n", info(1), pid1);
     
   // int pid2 = fork(); 
   // printf(1, "checkpoint2\n, number of processes:%d, new process ID: %d\n\n", info(1), pid2);
    int pid2= fork(); 
    if(pid2 == 0){    
// int pid2 = getpid();  	
    printf(1, "Child checkpoint7\npage tables of child process:%d, pid:%d\n\n", info(2), pid2);

    printf(1, "Child checkpoint7a\npage tables of child process:%d, pid:%d\n\n", info(2), pid2);
    printf(1, "Child checkpoint7b\npage tables of child process:%d, pid:%d\n\n", info(2), pid2);
    printf(1, "Child checkpoint7c\npage tables of child process:%d, pid:%d\n\n", info(2), pid2);
    printf(1, "Child checkpoint7d\npage tables of child process:%d, pid:%d\n\n", info(2), pid2);
    printf(1, "Child checkpoint7e\npage tables of child process:%d, pid:%d\n\n", info(2), pid2);
    printf(1, "Child checkpoint8\nsystem calls made by child process:%d\n\n", info(3));
    exit();   
 }
    else{
	sleep(10); 
	printf(1, "Parent checkpoint 7 for parent\npage tables: %d\n", info(2));
        
        printf(1, "Parent checkpoint8\nsystem calls made by parent process:%d\n\n", info(3));
	exit(); 
    }
    

}
