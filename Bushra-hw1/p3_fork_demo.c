// C++ Code to demonstrate getppid() 
#include <stdio.h> 
#include <unistd.h> 
  
// Driver Code 
int main() 
{ 
    pid_t pid1, pid1_new,pid2; 
    printf("Current Process id: %d \n", getpid()); 
    printf(" current Parent Process id: %d \n", getppid()); 

    pid1 = fork();
   pid2 = fork(); 

    if (pid1 == 0) {    
        printf("1st Child Process id: %d \n", getpid()); 
        printf("Parent Process id: %d \n", getppid()); 
        pid1_new = fork();
        if (pid1_new == 0){
            printf("11st Child Process id: %d \n", getpid()); 
            printf("Parent Process id: %d \n", getppid()); 
        } 
      }
else if (pid2== 0){
     printf("2end Child Process id: %d \n", getpid()); 
            printf("Parent Process id: %d \n", getppid()); 

    }

    return 0; 
} 
