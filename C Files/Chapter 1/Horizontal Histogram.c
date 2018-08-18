#include <stdio.h>

/* print a horizontal histogram of words in the input */

#define SIZE 10

int main() {
	int len_freq[11];
	int length, height;
	int c, i, k;

	length = height = 0;

	for (i = 0; i <= 10; ++i)
		len_freq[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\n' && c != '\t')
			++length;
		else if (length != 0) {
			if (length <= 10) {
				++len_freq[length-1];
				// printf(" %d:%d", length, len_freq[length-1]);
				if (height < len_freq[length-1])
					height = len_freq[length-1];
			}
			else {
				++len_freq[10];
				if (height < len_freq[10])
					height = len_freq[10];
			}
			length = 0;
		}
	}

	for(i = height; i > 0; --i) {
    	printf("%2d|", i);
        for(k = 0; k <= 10; ++k) {
            if(len_freq[k] >= i)
                printf("   #");
            else
                printf("    ");
        }
        printf("\n");
    }

    printf("  +");
    for(i = 0; i <= 10; ++i)
        printf("----");
    printf("\n   ");

    for(i = 0; i <= 10; ++i) {
        if(i < 10)
            printf("%4d", i+1);
        else
            printf(" +10");
    }
    printf("\n");

    return 0;

}