#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
  int N;
  scanf("%d",&N);
  while(N--){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(a==b) printf("2\n");
    else printf("1\n");
  }
  return 0;
}
