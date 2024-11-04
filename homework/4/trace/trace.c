//
// Created by 35861 on 24-10-21.
//
#include <stdio.h>
#include <stdbool.h>
#define MAX 52
char map[MAX][MAX];
bool vis[MAX][MAX];
int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int cango(int n,int m,char map[MAX][MAX],int x,int y,bool vis[MAX][MAX],int *x1,int *y1);
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int x0,y0;
    scanf("%d %d",&x0,&y0);
    x0--;
    y0--;
    for(int i=0;i<n;i++) {
        scanf("%s",map[i]);
    }
    vis[x0][y0]=true;
    int sum=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(map[i][j]=='#') {
                sum++;
            }
        }
    }
    printf("%d\n",sum);
    printf("%d %d\n",x0+1,y0+1);
    int x,y;
    int *x1,*y1;
    x1=&x;
    y1=&y;
    while (cango(n,m,map,x0,y0,vis,x1,y1)) {
        printf("%d %d\n",x+1,y+1);
        x0=x;
        y0=y;
    }
    return 0;
}
int cango(int n,int m,char map[MAX][MAX],int x,int y,bool vis[MAX][MAX],int *x1,int *y1) {
    int dx,dy;
    for(int i=0;i<4;i++) {
        dx=dir[i][0];
        dy=dir[i][1];

        if(x+dx<0||x+dx>n-1||y+dy<0||y+dy>m-1) {
            continue;
        }
        if(vis[x+dx][y+dy]==false&&map[x+dx][y+dy]=='#') {
            vis[x+dx][y+dy]=true;
            *x1=x+dx;
            *y1=y+dy;
            return 1;
        }
    }
    return 0;
}

