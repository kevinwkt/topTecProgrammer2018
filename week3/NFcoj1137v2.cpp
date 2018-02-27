#include <vector>
#include <stdio.h>
#include <set>
#include <unordered_map>
#include <list>

using namespace std;


void dfs(unordered_map<int, vector<int> > mp, set<int> tovisit,int level){
  tovisit.erase(level);
  for(int i=0;i<mp[level].size();i++){
       dfs(mp,tovisit, mp[level][i]);
  }
}

int main(){
  int a,b;
  int cas=1;
  // set<char>::iterator it;
  while(true){
    set<int> tovisit;
    set<int> reached;
    set<int> pointedto;
    unordered_map<int, vector<int> > mp;
    bool done=false;
    bool fucked=false;
    int start=0;
    while(true){
      scanf("%d %d",&a,&b);
      if(a==-1&&b==-1){
        done=true;
        break;
      }
      if(a==0 && b==0){
        break;
      }

      if(reached.find(b)==reached.end()) reached.insert(b);
      else{
        fucked=true;
      }
      tovisit.insert(a);
      tovisit.insert(b);
      pointedto.insert(a);
      if(pointedto.find(b)!=pointedto.end()) pointedto.erase(b);
      if(mp.find(a)!=mp.end()) mp[a].push_back(b);
      else{
        vector<int> v;
        v.push_back(b);
        mp[a]=v;
      }
    }

    reached.clear();
    int pto=*pointedto.begin();
    pointedto.clear();

    // for(auto it=mp.begin();it!=mp.end();it++){
    //   printf("NODE %d: ",it->first);
    //   for(int i=0;i<mp[it->first].size();i++){
    //     printf("%d ",mp[it->first][i]);
    //   }
    //   printf("\n");
    // }

    if(done) break;
    // printf("----------------------\n");

    if(fucked) printf("Case %d is not a tree.\n",cas);
    else{
        dfs(mp,tovisit, pto);
      if(tovisit.size()>0){
        printf("Case %d is not a tree\n",cas);
      }else{
        printf("Case %d is a tree.\n",cas);
      }
    }

    // printf("Because ");
    // for(auto it=tovisit.begin();it!=tovisit.end();it++) printf("%2d",*it);
    // printf("\n");
    // printf("Pointed to ");
    // for(auto it=pointedto.begin();it!=pointedto.end();it++) printf("%2d",*it);
    // printf("\n");
  //
    tovisit.clear();
    mp.clear();
    cas++;
  }

  return 0;
}
