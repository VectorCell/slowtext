#include <stdio.h>
#include <stdlib.h>

int wait[] = {10000};
int waits = 1;

int main(int argc, char *argv[]) {
	int next = 0;
	int pause = 0;
	while ((next = getchar()) != -1) {
		putchar(next);
		if (next == '\n') {
			pause = wait[rand() % waits];
			usleep(pause);
		}
	}
	return 0;
}
