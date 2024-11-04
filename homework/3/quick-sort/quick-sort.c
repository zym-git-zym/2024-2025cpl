//
// Created by 35861 on 24-10-17.
//
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int *a = (int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }

    int pivot=a[k-1];
    int l=0,r=n-1;
    while(l<r) {
        for(;;l++) {
            if (l==r)break;
            if(a[l]>=pivot) {
                break;
            }
        }
        for(;;r--) {
            if (l==r)break;
            if(a[r]<pivot) {
                break;
            }
        }
        swap(&a[l],&a[r]);
    }
    int temp;
    for(int i=0;i<n;i++) {
        if(a[i]==pivot) {
            temp = i;
        }
    }

    if(a[l]>pivot) {
        swap(&a[l],&a[temp]);
    }

    for(int i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    free(a);
    return 0;
}
void swap(int *a, int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}