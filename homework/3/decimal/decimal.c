//
// Created by 35861 on 24-10-12.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int len, n;
    scanf("%d %d", &len, &n);

    char *str = (char *)malloc((len + 1) * sizeof(char));
    scanf("%s", str);

    long long int sum = 0;

    for (int i = 0; i < len; i++) {
        int num;
        if (str[i] >= '0' && str[i] <= '9') {
            num = str[i] - '0';
        }
        else {
            num = str[i] - 'A' +10;
        }
        if (num >= n) {
            printf("Error");
            free(str);
            return 0;
        }
        sum =sum*n+num;
    }
    printf("%lld", sum);
    free(str);
    return 0;
}