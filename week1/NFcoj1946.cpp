#include <stdio.h>

using namespace std;

int m,n;
char matrix[101][101];
int visited[101][101];
bool vi[101][101];
int cX[]={-1,-1,0,1,1,0};
int cY[]={0,-1,-1,0,1,1};

//states: 0=nothing 1=clockwise 2=counterclockwise 3=free 4=blocked
void dfs(int x, int y, int state){
  if(visited[x][y]!=3) return;

  if(state==1&&state!=4) visited[x][y]=2;
  if(state==2&&state!=4) visited[x][y]=1;
  if(state==4) visited[x][y]=4;

  for(int i=0;i<6;i++){
    int newX=x+cX[i];
    int newY=y+cY[i];
    if(newX>=0&&newX<m&&newY>=0&&newY<n&&matrix[newX][newY]!='.'){
      if(state==1){
        if(visited[newX][newY]==1){
          visited[x][y]=4;
          dfs(newX,newY,4);
        }
        else dfs(newX,newY,2);
      }else if(state==2){
        if(visited[newX][newY]==2){
          visited[x][y]=4;
          dfs(newX,newY,4);
        }
        else dfs(newX,newY,1);
      }else if(state==4){
        dfs(newX,newY,4);
      }
    }
  }
}

int main(){

  while(true){

    char useless;
    scanf("%d %d",&m,&n);
    if(m==0&&n==0) break;

    for(int i=0;i<m;i++) for(int j=0;j<n;j++) visited[i][j]=0;
    scanf("%c",&useless);
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        scanf("%c",&matrix[i][j]);
        if(matrix[i][j]=='I') visited[i][j]=1;
        if(matrix[i][j]=='*') visited[i][j]=3;
      }
      scanf("%c",&useless);
    }

    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        if(matrix[i][j] == 'I'){
          dfs(i,j,2);
        }
      }
    }

    printf("\n");
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        if(visited[i][j]==0) printf(".");
        if(visited[i][j]==1) printf("(");
        if(visited[i][j]==2) printf(")");
        if(visited[i][j]==3) printf("F");
        if(visited[i][j]==4) printf("B");
        // printf("%d",visited[i][j]);
      }
      printf("\n");
    }

  }

  return 0;

}
