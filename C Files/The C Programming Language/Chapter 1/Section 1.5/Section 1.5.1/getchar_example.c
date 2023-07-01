#include <stdio.h>

int main() {
    int c;

    c = getchar();
    printf("getchar() != EOF: %d\n", (c != EOF));

    printf("EOF: %d\n", EOF); /* Value of EOF is -1 */

    return 0;
}