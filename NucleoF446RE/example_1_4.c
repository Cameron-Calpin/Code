#include <stdio.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main(void) {
	unsigned char var1;
	while(1) {
		var1 = var1 | 0x10;		/* Set bit 4 (5th bit) of var1 */
		var1 = var1 & 0xEF;		/* Clear it 4 (5th bit) of var1 */
		printf("var1: %s\n", var1);
		Sleep(1000);
	}
}