#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
  unsigned long long a,b,c;
  int T;

  cin>>T;
  string s;
  while(T--){

    cin>>s;
    int sum=0;
    for(int i=0;i<s.length();i++){
      sum=sum+(s[i]-'0');
    }
    // cout<<"s: "<<s<<endl;
    // cout<<"sum: "<<sum<<endl;

    int s2=0;
    s2+=(((s[s.length()-1]-'0')+((s[s.length()-2]-'0')*10)+((s[s.length()-3]-'0'))*100));
    s2*=10;

    // cout<<"s2: "<<s2<<endl;

    int total=sum+s2;
    int temp=0;
    if(total>9999){
      int j=1;
      for(int i=0;i<4;i++){
        temp+=((total%10)*(j));
        total/=10;
        j*=10;
      }
      if(temp<1000){
        cout<<'0';
        if(temp<100){
          cout<<'0';
          if(temp<10){
            cout<<'0';
          }
        }
      }
      cout<<temp<<endl;
    }else if(total<1000){
      cout<<total+1000<<endl;
    }else{
      cout<<total<<endl;
    }

  }

  return 0;
}
