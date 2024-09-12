//
// Created by 35861 on 24-9-10.
//
#include <stdio.h>
int main(){
    int fib_number[40];
    fib_number[0]=0;
    fib_number[1]=1;
    for(int i=2;i<=40;i++) {
        fib_number[i]=fib_number[i-1]+fib_number[i-2];
        printf("%d ",fib_number[i]);
    }
    return 0;

}

