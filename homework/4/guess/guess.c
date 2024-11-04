//
// Created by 35861 on 24-10-18.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    char res[10];

    unsigned int low = 0;
    unsigned int high = 4294967295;
    unsigned int guess ;

    while (1) {
        guess = low + (high - low) / 2;
        printf("%u\n", guess);
        fflush(stdout);
        scanf("%s", res);

        switch (res[0]) {
            case 'G': {
                high = guess-1;
                break;
            }
            case 'L': {
                low = guess+1;
                break;
            }
            case 'E': return 0;
            case 'O': return 0;
        }
    }
}