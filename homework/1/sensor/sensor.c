//
// Created by 35861 on 24-9-27.
//
#include <ctype.h>
#include <stdio.h>

int main() {
    char name[20];
    int pre;
    double frac;
    double factor;
    char unit;
    scanf("%s %d %lf %lf %c",name,&pre,&frac,&factor,&unit);

    printf("%.2s: %d (%.5lf) | ",name,pre,frac);
    printf("%.*E ",5,pre+frac);
    printf("%.5lf ",(pre+frac)*factor);
    printf("%c\n",toupper(unit));
    return 0;
}