#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {

	int x=0, s=0, var=0;

	if (argc==2) {

		x=atoi(argv[1]);
		if (x==10 && fork()==0) {
			printf("\n Proceso hijo PID=%d", getpid());
			exit(5);
		}
		s=wait(&var);
		printf("\n s=%d var=%d",s, var);
	}
	else
	{	
		printf("\n Numero de parametros incorrectos");
	}

}
