//
// Created by 35861 on 24-10-23.
//
#include<stdio.h>
#include <string.h>

char a[501];
char b[501];
char reva[501];
char revb[501];
char ans[502];
char revans[502];
int main(void) {
    scanf("%s",a);
    scanf("%s",b);
    int diga=strlen(a);
    int digb=strlen(b);
    a[diga]='\0';
    b[digb]='\0';
    for(int i=0;i<diga;i++) {
        char temp=a[i];
        reva[diga-1-i]=temp;
    }
    reva[diga]='\0';
    for(int i=0;i<diga;i++) {
        char temp=b[i];
        revb[digb-1-i]=temp;
    }
    revb[digb]='\0';
    memset(ans,'0',sizeof(ans));
    int big= diga>digb?diga:digb;
    for(int i=0;i<big+1;i++) {
        int tempa=0,tempb=0;
        if(i<diga)tempa=reva[i]-'0';
        if(i<digb)tempb=revb[i]-'0';
        if(ans[i]+(tempa+tempb)%10>'9') {
            ans[i]='0';
            ans[i+1]++;
            continue;
        }
        if(ans[i]+(tempa+tempb)%10<='9') {
            ans[i]+=(tempa+tempb)%10;
            if((tempa+tempb)/10) {
                ans[i+1]++;
            }
        }
    }

    if(ans[big]=='0') {
        ans[big]='\0';
        for(int i=0;i<big;i++) {
            char temp=ans[i];
            revans[big-1-i]=temp;
        }
        revans[big]='\0';
    }
    else {
        ans[big+1]='\0';
        for(int i=0;i<big+1;i++) {
            char temp=ans[i];
            revans[big-i]=temp;
        }
        revans[big+1]='\0';
    }


    printf("%s",revans);
    return 0;
}