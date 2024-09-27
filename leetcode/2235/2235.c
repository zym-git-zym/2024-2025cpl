//
// Created by 35861 on 24-9-26.
//
#include <stdio.h>

int sum(int num1, int num2) {
    return num1+num2;
}

int main(void){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d",sum(num1,num2));


}