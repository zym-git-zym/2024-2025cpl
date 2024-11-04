//
// Created by 35861 on 24-10-13.
//
#include <stdio.h>
#include <stdlib.h>


int search(int arr[], int size, int num);
int main() {

    int n;
    scanf("%d", &n);
    getchar();
    char *str = (char *)malloc(n * sizeof(char));
    scanf("%s", str);

    int nums[52];
    for (int i = 0; i < 52; i++) {
        nums[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (str[i]-'a'>=0 && str[i]-'a'<=25) {
            nums[2*(str[i]-'a')]++;
        }
        else if (str[i]-'A'>=0 && str[i]-'A'<=25) {
            nums[2*(str[i]-'A')+1]++;
        }
    }

    int max =nums[0];
    for (int i = 1; i < 52; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }

    for (int i = 0; i < max; i++) {
        for (int j = 0; j < 52; j++) {
            if (nums[j]>=max-i) {
                printf("=");
            }
            if (nums[j]<max-i&&nums[j]>0) {
                printf(" ");
            }
            if (j>=1&&j%2==1&&j<50&&(nums[j]>0||nums[j-1]>0)&&search(nums, 52, j)) {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < 52; i++) {
        if (nums[i]>0) {
            printf("-");
        }
        if (i>=1&&i%2==1&&i<50&&(nums[i]>0||nums[i-1]>0)&&search(nums, 52, i)) {
            printf("-");
        }
    }
    printf("\n");

    for (int i = 0; i < 52; i++) {
        if (nums[i]>0) {
            if (i%2==0)printf("%c",'a'+i/2);
            else printf("%c",'A'+(i-1)/2);
        }
        if (i>=1&&i<50&&i%2==1&&(nums[i]>0||nums[i-1]>0)&&search(nums, 52, i)) {
            printf(" ");
        }
    }

    free(str);
    return 0;
}

int search(int arr[], int size, int num) {
    int flag=0;
    for (int i = num+1; i < size; i++) {
        if (arr[i]>0) {
            flag=1;
        }
    }
    return flag;
}