#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {

	char *a[2];

	if (fork()==0) {
		/*execv("prog33",a); */
		system("prog33");
		printf("\nMensaje 1");
	}
	printf("\nMensaje 2");

}
