//
// Created by 35861 on 24-9-21.
//
#include <stdio.h>

int main() {
    char a[1000]={0};
    char ch;
    printf("Enter a message:");
    getchar(ch);
    while ((ch = getchar()) != '\n') {
        a[ch]=ch;
    }


    printf("Reversal is:");
}