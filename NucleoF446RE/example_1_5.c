#include <stdio.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main(void) {
	volatile unsigned char temp; /* declare volatile otherwise the optimizer will remove it. */
	temp = 0x35 & 0x0F; 	/* ANDing	 : 0x35 & 0x0F = 0x05 */
	printf("temp: %s\n", temp);
	temp = 0x04 | 0x68;		/* ORing	 : 0x04 | 0x68= 0x6C */
	printf("temp: %s\n", temp);
	temp = 0x54 ^ 0x78; 	/* XORing	 : 0x54 ^ 0x78 = 0x2C */
	printf("temp: %s\n", temp);
	temp = ~0x55;			/* Inverting : ~0x55 = 0xAA */
	printf("temp: %s\n", temp);
	while(1);
	return 0;
}