#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  int n;
  string s;
  while(true){
    cin>>n;
    if(n==0) break;
    cin>>s;
    for(int i=0;i<n;i++){
      reverse(&s[i*s.length()/n],&s[(i*s.length()/n)+(s.length()/n)]);
    }
    cout<<s<<endl;
  }
  return 0;
}
