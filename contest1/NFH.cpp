#include <iostream>
#include <stdio.h>
#include <algorithm>

unsigned long long x[100001];
unsigned long long y[100001];
unsigned long long table[100001];

unsigned long long abs(unsigned long long a, unsigned long long b){
  if(a>b) return a-b;
  return b-a;
}

using namespace std;
int main(){
  unsigned long long a,b;

  cin>>a>>b;

  for(int i=0;i<a;i++) cin>>x[i];
  for(int j=0;j<b;j++) cin>>y[j];

  sort(x,&x[a]);
  sort(y,&y[b]);

  unsigned long long sum=0;

  for(int i=0;i<b;i++){
    table[i]=abs(x[0],y[i]);
  }

  for(int i=1;i<a;i++){
    auto it= upper_bound(y,&y[b],x[i]);

  }

  cout<<sum<<endl;
  return 0;
}
