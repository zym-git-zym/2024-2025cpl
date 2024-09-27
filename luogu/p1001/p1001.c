//
// Created by 35861 on 24-9-21.
//
#include <stdio.h>
#include <stdlib.h>


int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(abs(a)<1000000000&&abs(b)<1000000000) {
        printf("%d",a+b);
        return 0;
    }
    else {
        return -1;
    }

}