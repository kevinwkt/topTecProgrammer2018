#include <stdio.h>
#include <iostream>


using namespace std;

int main(){

  int T;
  int arr[181];


  for(int i=0;i<181;i++) arr[i]=0;
  for(int i=0;i<33;i++) arr[(i-i/12)*6]++;

  while(scanf("%d",&T)!=EOF){
    if(arr[T]) printf("Y\n");
    else printf("N\n");
  }

  return 0;
}
