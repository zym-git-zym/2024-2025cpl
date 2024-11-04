//
// Created by 35861 on 24-9-30.
//
#include<stdio.h>
#include <string.h>


int main() {
    char a[15];
    int b;
    gets(a);
    if (strlen(a) == 1 && a[0] == '0')
        printf("0"
        );
    else {
        if (a[0] == '-') {
            a[0] = '\n';
            printf("-"
            );
        }
        for (b = strlen(a) - 1; b >= 0
             ; b--)
            if (a[b] != '0')
                break
                        ;
        for (; b >= 0; b--)
            printf("%c"
                   , a[b]);
    }
    return 0;
}
