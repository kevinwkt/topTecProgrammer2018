#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int abs(int a, int b){
  if(a-b<0) return b-a;
  return a-b;
}

int main(){

  int T;
  cin>>T;
  string s;
  cin>>s;

  sort(s.begin(),s.end());

  cout<<s[T/2]<<endl;
  return 0;
}
