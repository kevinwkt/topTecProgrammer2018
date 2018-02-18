#include <stdio.h>
#include <cmath>
#include <limits>
#include <unordered_map>

using namespace std;

bool visited[8];
int x[8];
int y[8];
unordered_map<int,int> map;
double minimum=numeric_limits<double>::max();

//FIX BUGGGGG

int visitCount(int size){
  // for(int i=0;i<size;i++) if(!arr[i]&&i!=end) return false;
  int count=0;
  for(int i=0;i<size;i++) if(!visited[i]) count++;
  return count;
}

void dfs(int current,int start, int end,int N,double acc,int level){
  if(visited[current]&&current!=map[start]) return;
  if(level==N-1) return;
  if(current==map[end]){
    if(acc<minimum) minimum=acc;
  }
  for(int i=0;i<N;i++){
    if(!visited[i]){
      visited[i]=true;
      dfs(i, start,end,N,acc+sqrt(((x[i]-x[current])*(x[i]-x[current])+((y[i]-y[current])*(y[i]-y[current])))),level++);
      visited[i]=false;
    }
  }
}

int main(){
  int N;
  int id;
  scanf("%d",&N);

  //Did not visit any
  for(int i=0;i<N;i++) visited[i]=false;

  //Save in id,x,y
  for(int i=0;i<N;i++){
    scanf("%d %d %d",&id,&x[i],&y[i]);
    map[id]=i;
  }


  int start,end;
  scanf("%d %d",&start,&end);
  visited[map[start]]=true;

  dfs(map[start],start,end,N,0,0);

  printf("%lf\n",minimum);

  // visited[start-1]=true;
  // double currentX=(double)x[start-1];
  // double currentY=(double)y[start-1];
  // double minimum;
  // double distance;
  // double total=0;

  // while(!allVisited(visited,N,end-1)){
  //   minimum=numeric_limits<double>::max();
  //   int index=0;
  //   for(int i=0;i<N;i++){
  //     if(!visited[i]&&i!=(end-1)){
  //     // if(!visited[i]){
  //       distance=sqrt(((x[i]-currentX)*(x[i]-currentX))+((y[i]-currentY)*(y[i]-currentY)));
  //       if(distance<=minimum){
  //         minimum=distance;
  //         index=i;
  //       }
  //
  //     }
  //   }
  //   visited[index]=true;
  //   total+=minimum;
  //   currentX=x[index];
  //   currentY=y[index];
    // if(index==end-1) break;
  // }


  // for(int i=0;i<N;i++){
  //   if(i!=end-1){
  //     minimum=numeric_limits<double>::max();
  //     distance=sqrt(((x[i]-x[end-1])*(x[i]-x[end-1]))+((y[i]-y[end-1])*(y[i]-y[end-1])));
  //     if(distance<=minimum){
  //       minimum=distance;
  //     }
  //   }
  // }

  // total+=sqrt(((currentX-x[end-1])*(currentX-x[end-1]))+((currentY-y[end-1])*(currentY-y[end-1])));

  // total+=minimum;

  // printf("%.2lf\n",total);

  return 0;
}
