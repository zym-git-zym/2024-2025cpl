//
// Created by 35861 on 24-10-7.
//
#include <stdio.h>

int main() {
    int hours, minutes;
    scanf("%d:%d", &hours, &minutes);
    if(hours<12) {
        printf("%02d:%02d a.m.", hours, minutes);
    }
    else if(hours==12) {
        printf("%02d:%02d p.m.", hours, minutes);
    }
    else {
        printf("%02d:%02d p.m.", hours-12, minutes);
    }
    return 0;
}