#include<stdio.h>
#include<stack>
#include<graphics.h>
#include<conio.h>
#include<iostream>
using namespace std;
int rat_maze(int maze[][8],int m){
stack<int> a;
int pop,top,i=0,j=0;
int move[8][2]={1,1,1,0,0,1,1,-1,-1,1,0,-1,-1,0,-1,-1};
bool check[m][m];
for(int l=0;l<m;l++){
for(int n=0;n<m;n++){
check[l][n]=false;
}
}
check[0][0]=true;
a.push(0);
int k=0;
while((i*j)!=(m-1)*(m-1)){
while(k<=7){
if(check[i+move[k][0]][j+move[k][1]]==false 
&& maze[i+move[k][0]][j+move[k][1]]==1 
&& (j+move[k][1])<=7 && (i+move[k]
[0])<=7){
i=i+move[k][0];
j=j+move[k][1];
check[i][j]=true;
a.push((i*m)+j);
printf("Push %d %d\n",i,j);
k=0;
if (i==m-1 && j==m-1){
settextstyle(3,4,4);
outtextxy(543,415,"Reached GOAL");
return 0;
}
setfillstyle(1,9);
floodfill(225+(50*j),225+(50*i),2);
delay(1000);
continue;
}
k++;
}
a.pop();
setfillstyle(1,0);
floodfill(225+(50*j),225+(50*i),2);
printf("Pop %d %d\n",i,j);
k=0;
if(i==0 && j==0){
settextstyle(3,4,4);
outtextxy(600,415,"Solution does not exist");
}
top=a.top();
i=top/m;
j=top%m;
printf("Top %d %d\n",i,j);
}
}
int main(){
int a[8][8]={{1,1,1,0,0,1,1,1},{0,0,1,1,1,1,0,0},
{0,0,1,0,0,1,0,0},{1,1,0,0,0,1,1,0},
 {1,0,1,0,0,1,0,0},{1,0,1,1,0,0,0,0},
{1,0,0,1,1,0,0,0},{0,0,0,0,1,1,1,1}};
int cnt1=0,cnt2=0;
int win1=initwindow(1000, 1000);
 setcurrentwindow(win1);
settextstyle(10,4,4);
outtextxy(500,50,"RAT - MAZE");
settextstyle(8,4,2);
outtextxy(600,80,"Green - Obstacle");
outtextxy(600,110,"Yellow - SRC, Dest");
outtextxy(600,140,"Violet - Path");
setcolor(2);
//Border
line(200,200,600,200);
line(600,200,600,600);
line(600,600,200,600);
line(200,600,200,200);
//Horizontal lines
line(200,250,600,250);
line(200,300,600,300);
line(200,350,600,350);
line(200,400,600,400);
line(200,450,600,450);
line(200,500,600,500);
line(200,550,600,550);
//Vertical Lines
line(250,200,250,600);
line(300,200,300,600);
line(350,200,350,600);
line(400,200,400,600);
line(450,200,450,600);
line(500,200,500,600);
line(550,200,550,600);
setfillstyle(1,LIGHTGREEN);//Green
for(int i=0;i<8;i++){
for(int j=0;j<8;j++){
floodfill(225+(50*j),225+(50*i),2);
}
}
for(int l=0;l<8;l++){
cnt1+=1;
for(int n=0;n<8;n++){
cnt2+=1;
if(a[l][n]==1){
setfillstyle(1,0);//Path
floodfill(225+(50*(cnt2-
1)),225+(50*(cnt1-1)),2);
}
}
cnt2=0;
}
setfillstyle(1,14);//Yellow
floodfill(225,225,2);
floodfill(575,575,2);
int c= rat_maze(a,8);
getch();
}