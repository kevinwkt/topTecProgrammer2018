#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

vector< vector<char> > servers;

// unordered_map<unordered_map<char>> servers;


// char companies[101];
unordered_map<char,char> companies2[101];
// char companies
// -1=no connection,

bool cycle(int start, int end, int comp){
  for(int i=0;i<=servers[start].size();i++){
    if(servers[start][i]==comp&&i!=end) if(servers[end][i]==comp) return true;
  }
  return false;
}

int main(){
    while(true){

      int N,M,C,T;
      scanf("%d %d %d %d",&N,&M,&C,&T);
      if(M==0&&N==0&&C==0&&T==0) break;

      int count=2;
      for(int i=0;i<=N;i++){
        if(i==0){
          vector<char> v;
          servers.push_back(v);
        }else{
          vector<char> v;
          for(int j=0;j<count;j++){
            v.push_back(-1);
          }
          servers.push_back(v);
          count++;
        }
      }

      // for(int i=0;i<=N;i++) for(int j=0;j<=N;j++) servers[i][j]=-1;
      for(int i=0;i<=100;i++){
        unordered_map<char,char> mp;
        companies2[i]=mp;
      }

      // printf("hello");

      int start, end, comp;
      for(int i=0;i<M;i++){
        scanf("%d %d %d",&end,&start,&comp);
        servers[start][end]=comp;
        // companies[comp]++;
        if(companies2[comp].find(end)!=companies2[comp].end()){  //if found
          companies2[comp][end]+=1;
        }else{
          companies2[comp][end]=1;
        }
        if(companies2[comp].find(start)!=companies2[comp].end()){  //if found
          companies2[comp][start]+=1;
        }else{
          companies2[comp][start]=1;
        }
        // else companies2[start][end]=1;
      }


      for(int i=0;i<T;i++){

        scanf("%d %d %d",&end,&start,&comp);

        //If non existant
        if(servers[start][end]==-1){
          printf("No such cable.\n");
        }else if(servers[start][end]==comp){
          printf("Already owned.\n");
        // }else if(companies[comp]==2){
        }else if(companies2[comp][start]==2||companies2[comp][end]==2){
          if(cycle(start,end,comp)) printf("Forbidden: redundant.\n");
          else printf("Forbidden: monopoly.\n");
        }else{
          printf("Sold.\n");
          companies2[servers[start][end]][start]-=1;
          companies2[servers[start][end]][end]-=1;
          if(companies2[comp].find(end)!=companies2[comp].end()){  //if found
            companies2[comp][end]+=1;
          }else{
            companies2[comp][end]=1;
          }
          if(companies2[comp].find(start)!=companies2[comp].end()){  //if found
            companies2[comp][start]+=1;
          }else{
            companies2[comp][start]=1;
          }
          // companies[comp]++;
          servers[start][end]=comp;
        }
      }
      printf("\n");
      servers.clear();
    }
    return 0;
}
