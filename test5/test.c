#include <stdlib.h>

void test() {
	char* str = malloc(-1);

	printf("%c", str[5]);

}
