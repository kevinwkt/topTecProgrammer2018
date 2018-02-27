#include <stdio.h>
#include <iostream>

using namespace std;

unsigned long long pow(unsigned int y){
    unsigned long long ans = 1; 
    unsigned long long x =2;
    while (y > 0){
        if (y & 1) ans = (ans*x) % 1000000007;
        y = y>>1;
        x = (x*x) % 1000000007;
    }
    return ans;
}


int main(){

  int T;
  while(true){
    scanf("%d",&T);
    if(T==0) break;

    printf("%llu\n",pow(T+1)-1);
  }

  return 0;
}
