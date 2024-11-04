//
// Created by 35861 on 24-10-14.
//
#include <stdio.h>
#include <string.h>


int num(const char *str);
int main() {

    int n;
    scanf("%d", &n);

    getchar();

    for (int i = 0; i < n; i++) {
        char str[16];

        for (int j = 0; j < 16; j++) {
            str[j] = '0';
        }

        scanf("%s", str);

        str[strcspn(str, "\n")]='\0';

        int len=strlen(str);

        int flag=1;
        for (int j = 0; j < len; j++) {
            if (str[j] != '0' && str[j] != '1' && str[j] != 'Z') {
                flag=0;
                break;
            }
        }


        int t = num(str);

        if(flag==0) {
            printf("Radix Error\n");
        }
        else {
            printf("%d\n", t);
        }
    }
}

int num(const char *str) {

    int num = 0;

    const int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i]=='1') {
            num=num*3+1;
        }
        else if(str[i]=='0') {
            num=num*3;
        }

        else if(str[i]=='Z') {
            num=num*3-1;
        }
    }

        return num;

}