// C++ Code to demonstrate getppid() 
#include <stdio.h> 
#include <unistd.h> 
  
// Driver Code 
int main() 
{ 
    pid_t pid1, pid11_new,pid12_new;
    printf("Current Process id: %d \n", getpid()); 
    printf(" Current Parent Process id: %d \n", getppid()); 

    pid1 = fork();

    if (pid1== 0) {    
        printf("1st Child Process id: %d \n", getpid()); 
        printf("Parent Process id: %d \n", getppid()); 
        pid11_new = fork();
        if (pid11_new == 0){
            printf("11nd Child Process id: %d \n", getpid()); 
            printf("Parent Process id: %d \n", getppid()); 
pid12_new = fork();
        if (pid12_new == 0){
            printf("12nd Child Process id: %d \n", getpid()); 
            printf("Parent Process id: %d \n", getppid()); 
        } 
    }
      }

    return 0; 
} 
