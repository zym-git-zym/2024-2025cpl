//
// Created by 35861 on 24-9-22.
//
#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int carpets[n][4];
    for(int i=0;i<n;i++) {
        scanf("%d""%d""%d""%d",&carpets[i][0],&carpets[i][1],&carpets[i][2],&carpets[i][3]);
    }
    int x,y;
    scanf("%d %d",&x,&y);

    for(int i=n-1;i>=0;i--) {
        int a,b,g,k;
        a=carpets[i][0];
        b=carpets[i][1];
        g=carpets[i][2];
        k=carpets[i][3];
        if(x>=a&&x<=a+g&&y>=b&&y<=b+k) {
            printf("%d",i+1);
            return 0;
        }
    }
    printf("-1");
    return 0;


}