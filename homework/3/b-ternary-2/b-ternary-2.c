//
// Created by 35861 on 24-10-14.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void Num( int num,char *result);
int main() {

    int n;
    scanf("%d", &n);

    getchar();

    for (int i = 0; i < n; i++) {
        char str[16];

        scanf("%s", str);

        str[strcspn(str, "\n")]='\0';

        int len=strlen(str);

        int flag=1;
        for (int j = 0; j < len; j++) {
            if (str[j] != '0' && str[j] != '1' && str[j] != '2'\
                && str[j] != '3'&& str[j] != '4'&&str[j]!='5'\
                &&str[j] !='6'&&str[j]!='7'&&str[j]!='8'\
                &&str[j]!='9'&&str[j]!='-') {
                flag=0;
                break;
            }
        }

        if(flag==0) {
            printf("Radix Error\n");
            continue;
        }

        int num = atoi(str);

        char result[22]={0};

        Num(num,result);

        printf("%s\n", result);

    }
}

void Num( int num,char *result) {

    if(num==0) {
        strcpy(result,"0");
        return;
    }

    int flag=1;
    if(num<0) {
        flag=0;
        num=-num;
    }

    char temp[22]={0};
    int mark=0;
    int tempi;

    while (num>0) {
        tempi=num%3;
        num/=3;

        if(tempi==2) {
            temp[mark++]='Z';
            num++;
        }
        else if(tempi==1) {
            temp[mark++]='1';
        }
        else if(tempi==0) {
            temp[mark++]='0';
        }
    }

    for(int i=0;i<mark;i++) {
        result[i]=temp[mark-i-1];
    }

    result[mark]='\0';

    if(flag==0) {
        for(int i=0;i<mark;i++) {
            if(result[i]=='1') {
                result[i]='Z';
            }
            else if(result[i]=='Z') {
                result[i]='1';
            }
        }
    }
}