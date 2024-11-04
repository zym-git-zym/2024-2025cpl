//
// Created by 35861 on 24-10-6.
//
#include<stdio.h>
#include <math.h>


int a[62505]={0};
int w=0,l=0;
int sum=0;


void show(int *a,int n);
int main() {
    char s;
    while (1) {
        s = getchar();
        if (s == 'E') {
            break; // 结束输入
        }
        if (s == 'W') {
            a[sum++] = 1; // 记录胜利
        } else if (s == 'L') {
            a[sum++] = 2; // 记录失败
        }
    }
    if(a[0]==0) {
        printf("0:0\n\n0:0");
        return 0;
    }
    show(a,11);
    printf("\n");
    show(a,21);
    return 0;
}


void show(int *a,int n) {
    for(int i=0;i<sum;i++) {
        if(a[i]==1) w++;
        else if(a[i]==2) l++;


        if(abs(w-l)>=2&&(w>=n||l>=n)) {
            printf("%d:%d\n",w,l);
            w=0;l=0;
        }
    }

        printf("%d:%d\n",w,l);
        w=0;l=0;

}
