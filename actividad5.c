#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {

	int i=0,pid;

	for (i=0; i < 3; i++) {
		pid=fork();
	        if (pid==0) {
			printf("\n1 Proceso hijo %d proceso padre %d\n",
				getpid(), getppid());		
		}
		wait(NULL);	
		
	}
	wait(NULL);


}
