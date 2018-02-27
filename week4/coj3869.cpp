#include <stdio.h>
#include <iostream>

using namespace std;

int abs(int a, int b){
  if(a-b<0) return b-a;
  return a-b;
}

int main(){

  int T;
  scanf("%d",&T);
  int curr=1;
  int total=0;
  int temp;
  while(T--){
    scanf("%d",&temp);
    total+=abs(curr,temp);
    curr=temp;
  }

  total+=abs(curr,1);

  printf("%d\n",total);
  return 0;
}
