//
// Created by 35861 on 24-10-14.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main() {
    int t;
    scanf("%d", &t);

    bool *yesornot=malloc((t)*sizeof(bool));

    for (int i = 0; i < t; i++) {
        yesornot[i] = true;
    }

    for(int i=0;i<t;i++) {
        int nums;
        scanf("%d", &nums);

        getchar();

        int *arr = (int*)malloc(nums*sizeof(int));
        for(int j=0;j<nums;j++) {
            scanf("%d", &arr[j]);
        }

        int m = arr[nums-1];
        for(int j=0;j<nums-1;j++) {
            if(arr[j]>m) {
                yesornot[i]=false;
                break;
            }
        }
        free(arr);
    }
    for(int i=0;i<t;i++) {
        if(yesornot[i]==true) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
    free(yesornot);
    return 0;

}