//
// Created by 35861 on 24-10-6.
//
#include <stdio.h>
#include <stdlib.h>

int vs[5][5] = {
    {0, 0, 1, 1, 0},
    {1, 0, 0, 1, 0},
    {0, 1, 0, 0, 1},
    {0, 0, 1, 0, 1},
    {1, 1, 0, 0, 0}
};
int main() {
    int n , n1 , n2;
    scanf("%d %d %d",&n,&n1,&n2);
    int *a = (int*)malloc(n1*sizeof(int));
    int *b = (int*)malloc(n2*sizeof(int));
    for(int i=0;i<n1;i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n2;i++) {
        scanf("%d",&b[i]);
    }
    int A=0;
    int B=0;
    for(int i=0;i<n;i++) {
        A+=vs[a[i%n1]][b[i%n2]];
        B+=vs[b[i%n2]][a[i%n1]];
    }
    printf("%d %d",A,B);
    free(a);
    free(b);
    return 0;


}