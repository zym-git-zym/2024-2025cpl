//
// Created by 35861 on 24-10-18.
//
#include <stdio.h>


int main() {
    double equ[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%lf", &equ[i][j]);
        }
    }
    double delta,delta1,delta2,delta3;
    delta=equ[0][0]*(equ[1][1]*equ[2][2]-equ[2][1]*equ[1][2])-equ[0][1]*\
    (equ[1][0]*equ[2][2]-equ[1][2]*equ[2][0])+equ[0][2]*\
    (equ[1][0]*equ[2][1]-equ[1][1]*equ[2][0]);

    delta1=equ[0][3]*(equ[1][1]*equ[2][2]-equ[2][1]*equ[1][2])-equ[0][1]*\
    (equ[1][3]*equ[2][2]-equ[1][2]*equ[2][3])+equ[0][2]*\
    (equ[1][3]*equ[2][1]-equ[1][1]*equ[2][3]);

    delta2=equ[0][0]*(equ[1][3]*equ[2][2]-equ[1][2]*equ[2][3])-equ[0][3]*\
    (equ[1][0]*equ[2][2]-equ[1][2]*equ[2][0])+equ[0][2]*\
    (equ[1][0]*equ[2][3]-equ[1][3]*equ[2][0]);

    delta3=equ[0][0]*(equ[1][1]*equ[2][3]-equ[1][3]*equ[2][1])-equ[0][1]*\
    (equ[1][0]*equ[2][3]-equ[1][3]*equ[2][0])+equ[0][3]*\
    (equ[1][0]*equ[2][1]-equ[1][1]*equ[2][0]);

    printf("%.2lf %.2lf %.2lf",delta1/delta,delta2/delta,delta3/delta);
    return 0;
}