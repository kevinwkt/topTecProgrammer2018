#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){

  string s;
  string ans;
  while(cin>>s){

    unordered_map<char,int> mp;

    int count=1;

    // char twofive;
    // char fivetwo;
    // char sixnine;
    // char ninesix;

    for(int i=0;i<s.length();i++){
      if(mp.find(s[i])==mp.end()){
        // if(count==2) twofive=s[i];
        // if(count==5) fivetwo=s[i];
        // if(count==6) sixnine=s[i];
        // if(count==9) ninesix=s[i];
        mp[s[i]]=count;
        count++;
      }
    }

    for(int i=0;i<s.length();i++){
      if(mp[s[i]]==2){
        cout<<'5';
      }else if(mp[s[i]]==5){
        cout<<'2';
      }else if(mp[s[i]]==6){
        cout<<'9';
      }else if(mp[s[i]]==9){
        cout<<'6';
      }else{
        ans=to_string(mp[s[i]]);
        // cout<<endl<<"here: "<<ans<<endl;
        for(int j=0;j<ans.length();j++){
          if(ans[j]=='2'){
            cout<<'5';
          }else if(ans[j]=='5'){
            cout<<'2';
          }else if(ans[j]=='6'){
            cout<<'9';
          }else if(ans[j]=='9'){
            cout<<'6';
          }else{
            cout<<ans[j];
          }
        }
      }
    }
    cout<<endl;

  }

  return 0;
}
