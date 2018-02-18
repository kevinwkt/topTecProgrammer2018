#include <vector>
#include <stdio.h>
#include <set>
#include <unordered_map>

using namespace std;

int main(){
  int a,b;
  bool done=false;
  set<int>::iterator it;
  while(true){
    unordered_map<int, vector<int> > mp;
    set<int> visited;
    set<int> visitedbutok;
    set<int> tovisit;
    while(true){
      scanf("%d %d",&a,&b);
      if(a==-1&&b==-1){
        done=true;
        break;
      }
      if(a==0 && b==0){
        break;
      }
      tovisit.insert(a);
      if(mp.find(a)!=mp.end()) mp[a].push_back(b);
      else{
        vector<int> v;
        v.push_back(b);
        mp[a]=v;
      }
    }// After getting all data inside mp
    if(done) break;


    bool fucked=false;

    while(tovisit.begin()!=tovisit.end()!=0&&!fucked){
      it = tovisit.begin();
      visitedbutok.insert(*it);
      visited.insert(*it);
      tovisit.erase(it);
      for(int i=0;i<mp[*it].size();i++){
        if(visited.find(mp[*it][i])!=visited.end()&&visitedbutok.find(mp[*it][i])==visited.end()){
          fucked=true;
          break;
        }else if(visited.find(mp[*it][i])!=visited.end()){

        }else{
          visited.insert(mp[*it][i]);
          tovisit.erase(mp[*it][i]);
        }
      }
    }

    if(fucked){
      printf("is not a tree\n");
    }else{
      printf("is a tree\n");
    }
    printf("\n");

    visited.clear();
    visitedbutok.clear();
    tovisit.clear();
    mp.clear();
  }

  return 0;
}
