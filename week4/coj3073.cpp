#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){

  int T;
  cin>>T;
  string s;
  while(T--){

    cin>>s;
    if(s.length()>10){
      cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
    }else{
      cout<<s<<endl;
    }

  }

  return 0;
}
