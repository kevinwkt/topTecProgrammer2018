#include <map>
#include <stdio.h>
#include <iostream>

using namespace std;

int arr[1002];
bool visited[1002];

int main(){
  int T;
  scanf("%d",&T);
  // printf("%d\n",T);
  for(int ii=1;ii<=T;ii++){
    int N;
    scanf("%d",&N);

    for(int i=1;i<=N;i++){
      scanf("%d",&arr[i]);
    }


    int currIndex=1;
    bool second=false;
    visited[1]=true;
    int first=0;
    int sec=0;

    while(true){
      if(visited[arr[currIndex]]){
        if(second){
          sec=arr[currIndex];
          break;
        }else{
          first=arr[currIndex];
          second=true;
        }
      }else{
        visited[arr[currIndex]]=true;
      }
      currIndex=arr[currIndex];
    }

    int tttemp;
    if(first>sec){
      tttemp=first;
      first=sec;
      sec=tttemp;
    }
    printf("Case #%d: %d %d\n",ii,first,sec);

  }
  return 0;
}
