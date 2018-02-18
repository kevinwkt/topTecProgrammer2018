#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(){

  string s;
  string t;

  while(cin>>s>>t){
    int count=0;
    for(int i=0;i<t.length();i++){
      if(t[i]==s[count]) count++;
      if(count==s.length()) break;
    }
    if(count==s.length()) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }

  return 0;
}
