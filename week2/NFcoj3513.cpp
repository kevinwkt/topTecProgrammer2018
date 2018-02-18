#include <map>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
  int T;
  scanf("%d",&T);
  for(int ii=1;ii<=T;ii++){

    int n,temp;
    map<int,int> mp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%d",&temp);

      if(mp.find(temp)==mp.end()){
        mp[temp]=1;
      }else mp[temp]+=1;
    }

    int max=0;
    int max2=0;
    int count=0;
    for(auto it=mp.begin();it!=mp.end();it++){
      if(it->second>max){
        max=it->second;
      }
      if(it->second>max2&&it->second!=max){
        max2=it->second;
      }
    }

    for(auto it=mp.begin();it!=mp.end();it++){
      if(it->second==max){
        count++;
      }
    }

    printf("Case #%d:",ii);

    if(count>=2){
      bool second=false;
      for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second==max){
          if(second){
            printf(" %d",it->first);
            break;
          }else{
            printf(" %d",it->first);
            second=true;
          }
        }
      }
    }else{
      bool second=false;
      for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second==max||it->second==max2){
          if(second){
            printf(" %d",it->first);
            break;
          }else{
            printf(" %d",it->first);
            second=true;
          }
        }
      }
    }

    printf("\n");
  }
  return 0;
}
