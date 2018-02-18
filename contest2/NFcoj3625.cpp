#include <stdio.h>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int min(int a,int b){
  return a>b?b:a;
}

int max(int a,int b){
  return a>b?a:b;
}

int main(){
  int T;
  scanf("%d",&T);
  while(T--){
    int N;
    scanf("%d",&N);

    bool H=true;


    int before=max((N-1)/3,1);
    int count=(N-1)/3;

    while(true){
      if(count+before>=N) break;
      before=min(max((N-count)/3,1),before*2);
      else before=1;
      count+=before;
      H=!H;
    }

    if(H) printf("Harry wins\n");
    else printf("Ron wins\n");
  }
  return 0;
}
