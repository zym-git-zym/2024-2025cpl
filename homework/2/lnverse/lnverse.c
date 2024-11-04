//
// Created by 35861 on 24-10-7.
//
#include <stdio.h>
#include <stdlib.h>


void inverse(char *str,int start,int end);
int main() {
    int n;
    int k;
    scanf("%d", &n);
    getchar();
    char *str = (char *)malloc((n+1) * sizeof(char));
    fgets(str,n+1,stdin);
    scanf("%d", &k);
    inverse(str,0,k-1);
    inverse(str,k,n-1);
    printf("%s",str);
    free(str);
    return 0;
}

void inverse(char *str,int start,int end) {
    for(;start<end;) {
        int temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}