#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char * argv[]) {

	int a, b=0, c,d;
	if (argc != 2) exit(3);
	else {
		a=atoi(argv[1]);
		while (fork()==0 &&  b!=a) {
			printf("\nMensaje 1 %d\n", getpid());
			b=b+1;
		}

	}
	c=wait(&d);
	printf("\nMensaje 2[%d]= %d\n", getpid(),getppid());



}

