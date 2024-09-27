//
// Created by 35861 on 24-9-24.
//
#include<stdio.h>
#include <math.h>

int searchmin(int L,int N,int p[]);
int searchmax(int L,int N,int p[]);
int main() {
    int L,N;
    scanf("%d %d",&L,&N);
    int p[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&p[i]);
    }
    printf("%d",searchmin(L,N,p));
    printf(" ");
    printf("%d",searchmax(L,N,p));
    return 0;
}

int searchmin(int L,int N,int p[]) {
    if(N==0) {
        return 0;
    }
    int min=fmin(p[0],L-p[0]+1);
    for(int i=0;i<N;i++) {
        if(fmin(p[i],L-p[i]+1)>min) {
            min=fmin(p[i],L+1-p[i]);
        }
    }
    return min;
}
int searchmax(int L,int N,int p[]) {
    if(N==0) {
        return 0;
    }
    int max=fmax(p[0],L-p[0]+1);
    for(int i=0;i<N;i++) {
        if(fmax(p[i],L-p[i]+1)>max) {
            max=fmax(p[i],L+1-p[i]);
        }
    }
    return max;
}










