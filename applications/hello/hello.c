#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

void sigHandler() {
	puts("[hello.c]: EXITING...\n");
	exit(0);
}

int main(void) {
	signal(SIGINT, sigHandler);
	while(1) {
		puts("[hello.c]: Hello World!\n");
		sleep(5);
	}
	return 0;
}
