#include <iostream>
#include <stdio.h>

using namespace std;

int gcd(int a,int b){
  if (a==b) return a;
  if (a>b) return gcd(a-b,b);
  return gcd(a,b-a);
}

int main(){
  int n;
  cin>>n;
  int count=0;
  for(int i=1;i<n;i++) if(gcd(i,n)==1) count++;
  cout<<count<<endl;
  return 0;
}
