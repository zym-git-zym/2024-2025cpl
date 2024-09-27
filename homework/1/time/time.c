//
// Created by 35861 on 24-9-27.
//
#include <stdio.h>

int main() {
    char month[100];
    int day=0;
    int year=0;
    char weekday[100];
    int hour=0;
    int minute=0;
    int second=0;
    char buffer1[4];
    char buffer2[4];
    scanf("%s %d %d %s %d %d %d",month,&day,&year,weekday,&hour,&minute,&second);
    snprintf(buffer1,sizeof(buffer1),"%.3s",weekday);
    snprintf(buffer2,sizeof(buffer2),"%.3s",month);
    printf("%s %s %02d %02d:%02d:%02d %04d",buffer1,buffer2,day,hour,minute,second,year);
    return 0;
}
