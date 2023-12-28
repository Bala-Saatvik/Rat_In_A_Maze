# Rat_In_A_Maze
Backtracking Approach using Stack Data Structure

ALGORITHM
procedure rat_maze(int maze[][8],int m)
//maze - (0:m+1,0:m+1)
//m - size of row and column of matrix
[
a <- stack;
i <- 0; j <- 0; k <- 0;
move[8][2]={1,1,1,0,0,1,1,-1,-1,1,0,-1,-1,0,-1,-1};
for(l <- 0.....m)
[
for(n <- 0.....m)
[
check[l][n]=0;
]
]
check[0][0]=1;
a.push(0);
while((i*j)!=(m-1)*(m-1))
[
while(k<=7)
[
if(check[i+move[k][0]][j+move[k][1]]==0
&& maze[i+move[k][0]][j+move[k][1]]==1 &&
(j+move[k][1])<=7 && (i+move[k][0])<=7)
[
i=i+move[k][0];
j=j+move[k][1];
check[i][j]=1;
a.push((i*m)+j);
print(Push i, j);
k=0;
if (i==m-1 && j==m-1)
[
print(Goal Reached);
return TRUE;
]
print(PATH);
continue;
]//end if
k++;
]//end inner while
a.pop();
print(Backtracking PATH);
print(Pop i, j);
k=0;
if(i==0 && j==0)
[
print(Solution does not exist);
] top=a.top();
i=top/m;
j=top%m;
print(Top i, j);
]//end outer while
]//end procedure
