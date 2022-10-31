#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "err.h"

#define NB_PROC 5

int main ()
{
  pid_t pid;
  
   /* print process ID */
  printf("My PID = %d\n", getpid());

   /* create new process */
  
  for (int i=0; i < NB_PROC; i++) {

  switch (pid = fork()) {
    case -1: /* error */
      syserr("Error in fork\n");

    case 0: /* child process */
 
      printf("I am the child process. My PID = %d\n", getpid());
      printf("Child process value received from fork() = %d\n", pid);
	return 0;
       
    default: /* parent process */

      printf("I am the parent process. My PID = %d\n", getpid());
      printf("Parent process value received from fork() = %d\n", pid);
  }
}

sleep(10);
       /* parent process is waiting until the child process has finished */
      if (wait(0) == -1) 
	syserr("Error in wait\n");
sleep(10);
      return 0;
}

