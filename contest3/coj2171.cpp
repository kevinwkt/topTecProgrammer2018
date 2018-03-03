#include <stdio.h>
#include <iostream>

using namespace std;

int arr[1000001];

int main(){

  int T;
  int a,b;
  scanf("%d",&T);
  for(int i=0;i<1000000;i++) arr[i]=0;

  int minA=1000001;
  int maxB=0;
  while(T--){
    scanf("%d %d",&a,&b);
    if(a<minA) minA=a;
    if(b>maxB) maxB=b;
    arr[a]++;
    arr[b+1]--;
  }

  int max=0;
  int cur=0;
  for(int i=0;i<=maxB;i++){
    cur+=arr[i];
    if(max<cur){
      max=cur;
    }
  }

  printf("%d\n",max);
  return 0;
}
