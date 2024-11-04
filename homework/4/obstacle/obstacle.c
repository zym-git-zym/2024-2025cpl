//
// Created by 35861 on 24-10-20.
//
#include <stdio.h>
#include <stdlib.h>


int main() {
    int xa,ya,xb,yb,xc,yc;
    int n;
    scanf("%d %d %d %d %d %d",&xa,&ya,&xb,&yb,&xc,&yc);

    if(xa==xb) {
        if(xa==xc&&((yb>yc&&yc>ya)||(ya>yc&&yc>yb))) {
            n=abs(ya-yb)+2;
            printf("%d\n",n);
            printf("R");
            if(yb>ya) {
                for(int i=0;i<n-2;i++) {
                    printf("U");
                }
            } else {
                for(int i=0;i<n-2;i++) {
                    printf("D");
                }
            }
            printf("L");
        }else {
            n=abs(yb-ya);
            printf("%d\n",n);
            if(yb>ya) {
                for(int i=0;i<n;i++) {
                    printf("U");
                }
            } else {
                for(int i=0;i<n;i++) {
                    printf("D");
                }
            }
        }
    }
    else if(ya==yb) {
        if(yc==ya&&((xa>xc&&xc>xb)||(xb>xc&&xc>xa))) {
            n=abs(xb-xa)+2;
            printf("%d\n",n);
            printf("U");
            if(xb>xa) {
                for(int i=0;i<n-2;i++) {
                    printf("R");
                }
            } else {
                for(int i=0;i<n-2;i++) {
                    printf("L");
                }
            }
            printf("D");
        }else {
            n=abs(xb-xa);
            printf("%d\n",n);
            if(xb>xa) {
                for(int i=0;i<n;i++) {
                    printf("R");
                }
            } else {
                for(int i=0;i<n;i++) {
                    printf("L");
                }
            }
        }
    }
    else {
        n=abs(xb-xa)+abs(yb-ya);
        if(xa==xc||yb==yc) {
            printf("%d\n",n);
            for(int i=0;i<abs(xb-xa);i++) {
                if(xb>xa) {
                    printf("R");
                } else {
                    printf("L");
                }
            }
            for(int i=0;i<abs(yb-ya);i++) {
                if(yb>ya) {
                    printf("U");
                } else {
                    printf("D");
                }
            }
        }
        else  {
            printf("%d\n",n);
            for(int i=0;i<abs(yb-ya);i++) {
                if(yb>ya) {
                    printf("U");
                } else {
                    printf("D");
                }
            }
            for(int i=0;i<abs(xb-xa);i++) {
                if(xb>xa) {
                    printf("R");
                } else {
                    printf("L");
                }
            }
        }
    }

}


