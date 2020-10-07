#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {

	int  pid;
	int tiempopadre=0, tiempohijo=0;

	if (argc!=3) {
		printf("Parametros incorrectos\n");
		exit(1);
	}

	tiempopadre=atoi(argv[1]);
	tiempohijo=atoi(argv[2]); 

	pid=fork();
	if (pid==-1) {
		printf("Error");
	}
	else if (pid==0) {
		printf("\nProceso hijo con PID=%d",getpid());
		sleep(tiempohijo);
	}
	else {
		printf("\nProceso padre con PID=%d",getpid());
		sleep(tiempopadre);

	}

}
