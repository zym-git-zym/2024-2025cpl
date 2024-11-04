//
// Created by 35861 on 24-10-8.
//
#include <stdio.h>

int main() {
    int c;
    scanf("%d", &c);
    static char *ones[] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    static char *tens[] = {
        "0", "1", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety"};


    if (c<=19) {
        printf("%s", ones[c]);
    }
    else if(c>19&&c%10==0&&c<100) {
        printf("%s", tens[c/10]);
    }
    else if (c<=99) {
        printf("%s-%s",tens[c/10] ,ones[c%10]);
    }
    else if(c%100==0&&c!=0) {
        printf("%s hundred", ones[c/100]);
    }
    else if(c>=100&&c%100<=19&&c%100>0) {
        printf("%s hundred and %s",ones[c/100],ones[c%100]);
    }
    else if(c>=100&&(c%100)%10==0&&(c%100)>=20) {
        printf("%s hundred and %s",ones[c/100],tens[(c%100)/10]);
    }
    else {
        printf("%s hundred and %s-%s",ones[c/100],tens[c/10%10],ones[c%10]);
    }
    return 0;
}