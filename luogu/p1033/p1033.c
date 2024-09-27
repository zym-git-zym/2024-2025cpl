//
// Created by 35861 on 24-9-25.
//
#include<stdio.h>
#include<math.h>

int main() {
    double H,S,V,L,K;
    int n;
    int sum=0;
    scanf("%lf %lf %lf %lf %lf",&H,&S,&V,&L,&K);
    scanf("%d",&n);
    double timemin,timemax;
    double time[n][2];
    timemin=sqrt(2*(H-K)/10);
    timemax=sqrt(2*(H)/10);
    for(int i=0;i<n;i++) {
        time[i][0]=(S-i)/V;
        time[i][1]=(S-i+L)/V;
    }
    for(int i=0;i<n;i++) {
        if((time[i][0]<=timemin&&time[i][1]>=timemin)||(time[i][0]>=timemin&&time[i][1]<=timemax)||(time[i][0]<=timemax&&time[i][1]>=timemax)) {
            sum++;
        }
    }
    printf("%d",sum);

    return 0;
}





