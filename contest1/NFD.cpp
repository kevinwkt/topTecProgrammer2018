#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

unsigned int dp[10000001];

int main(){
  unsigned int n = 10000000;
  unsigned long long sum=0;
  unsigned long long sum2=0;
  for(int i=0;i<=n;i++) dp[i]=0;
  for(int i=1;i<=n;i++){
    sum+=i;
    if(sum>n) break;
    dp[sum]=1;
    dp[sum*2]=2;
  }
  int idx = 1;
  for(int i=1;i<=n;i++){
    if(dp[i]==0){
      dp[i]=dp[i-idx]+1;
    }else{
      idx = i;
    }
  }

  while(scanf("%u",&n)!=EOF){
    printf("%u\n",dp[n]);
  }
  return 0;
}
