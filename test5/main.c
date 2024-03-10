#include <stdio.h>
#include "test.c"

void fn(char* buff) {
	for (int i = -1; i < 2048; i++) {
		buff[i] = 0x41;
	}
}

int main () {
	char buffer[1024] = {0};

	fn(buffer);

	test();
}
