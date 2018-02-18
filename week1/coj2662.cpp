#include <unordered_map>
#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n;
  cin>>n;
  unordered_map<string,int> map;
  for(int i=0;i<n;i++){
    vector<string> v;
    string aa,bb,cc;
    cin>>aa>>bb>>cc;
    v.push_back(aa);
    v.push_back(bb);
    v.push_back(cc);
    sort(v.begin(),v.end());
    string news=v[0]+" "+v[1]+" "+v[2];
    if(map.find(news)==map.end()) map.insert(make_pair(news,1));
    else map[news]+=1;
  }
  int max=0;
  for(auto it=map.begin();it!=map.end();it++) if(it->second>max) max=it->second;

  cout<<max<<endl;
  return 0;
}
