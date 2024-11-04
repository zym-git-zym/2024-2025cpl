//
// Created by 35861 on 24-10-12.
//
#include <stdio.h>


int main() {
    int firstday, day;
    scanf("%d %d",&day,&firstday);
    if(firstday==1)firstday=7;
    else firstday-=1;
    for (int i=1;i<firstday;i++) {
        if(i==1)printf("   ");
        else printf("    ");
    }
    for (int i=1;i<=day;i++) {
        if((i+firstday-1)%7==1)printf("%2d ",i);
        else printf(" %2d ",i);
        if((i+firstday-1)%7==0&&i<day) {
            printf("\n");
        }
    }
}
