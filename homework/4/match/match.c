//
// Created by 35861 on 24-10-18.
//
#include <stdio.h>
#include <string.h>


typedef struct {
    int x1,y1,x2,y2;
    int hadfirst;
} seat;
int n,m;
int a[502][502];
seat seats[502*502/2];
int directions[4][2]={{1,0},{0,1},{0,-1},{-1,0}};
int success[502*502/2+1];
int canget(int x1,int y1,int x2,int y2,int a[502][502]);
int main() {
    scanf("%d %d",&n,&m);
    memset(seats,0,sizeof(seats));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d",&a[i][j]);
            if(!seats[a[i][j]].hadfirst) {
                seats[a[i][j]].x1=i;
                seats[a[i][j]].y1=j;
                seats[a[i][j]].hadfirst=1;
            } else {
                seats[a[i][j]].x2=i;
                seats[a[i][j]].y2=j;
            }
        }
    }

    for(int i=1;i<=m*n/2;i++) {
        int can =canget(seats[i].x1,seats[i].y1,seats[i].x2,seats[i].y2,a);
        if(can==1) {
            a[seats[i].x1][seats[i].y1]=0;
            a[seats[i].x2][seats[i].y2]=0;
            success[i]=1;
        }
    }
    for(int i=1;i<=m*n/2;i++) {
        if(success[i]==1) {
            printf("%d ",i);
        }
    }
    return 0;
}

int canget(int x1,int y1,int x2,int y2,int a[502][502]) {
    for (int i = 0; i < 4; i++) {
        int newx1=x1;
        int newy1=y1;
        int newx2=x2;
        int newy2=y2;

        int dx1 = directions[i][0];
        int dy1 = directions[i][1];

        int dx2 = directions[i][0];
        int dy2 = directions[i][1];

        newx1+=dx1;
        newy1+=dy1;

        while (newx1 >= 0 && newx1 < n && newy1 >= 0 && newy1 < m&&a[newx1][newy1]==0) {
            newx1 += dx1;
            newy1 += dy1;
        }
        if (newx1 == -1 || newx1 == n || newy1 == -1 || newy1 == m) {
            newx2+=dx2;
            newy2+=dy2;
            while (newx2 >= 0 && newx2 < n && newy2 >= 0 && newy2 < m&&a[newx2][newy2]==0) {
                newx2 += dx2;
                newy2 += dy2;
            }
            if(newx2 == -1 || newx2 == n || newy2 == -1 || newy2 == m){
                if ((newx1 < 0 && newx2 < 0) || (newx1 >= n && newx2 >= n) ||
            (newy1 < 0 && newy2 < 0) || (newy1 >= m && newy2 >= m)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}