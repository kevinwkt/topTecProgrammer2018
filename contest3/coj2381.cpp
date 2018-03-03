#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){

  int size;
  string s;
  int turn;

  unordered_map<char,int> mp;

  cin>>size>>s>>turn;

  for(int i=0;i<size;i++){
    if(mp.find(s[i])!=mp.end()){
      mp[s[i]]++;
    }else{
      mp[s[i]]=1;
    }
  }

  int PEPE=0;
  int JUAN=0;


  //Pepe true;

  bool turns=true;

  if(turn%2){
    turns=false;
  }
  bool start=turns;

  int used=0;

  for(int i=0;i<26;i++){
    char fi='A'+i;
    if(turns){
      if(mp.find(fi)!=mp.end()){
        PEPE+=(mp[fi]*(size-mp[fi]-used));
        used+=mp[fi];
      }
    }else{
      if(mp.find(fi)!=mp.end()){
        JUAN+=(mp[fi]*(size-mp[fi]-used));
        used+=mp[fi];
      }
    }
    turns=!turns;
    start=turns;
  }

  if(PEPE==JUAN){
    if(start) printf("PEPE %d\n",PEPE-JUAN);
    else printf("JUAN %d\n",JUAN-PEPE);
  }else if(PEPE>JUAN){
    printf("PEPE %d\n",PEPE-JUAN);
  }else{
    printf("JUAN %d\n",JUAN-PEPE);
  }

  return 0;
}
