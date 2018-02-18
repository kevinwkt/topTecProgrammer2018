#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int ans[1];

void dfs(vector<string> s,bool visited[],int level) {
  if(level==s.size()){
    // printf("YES\n");
    // ans[0]^=1;
    ans[0]++;
    return;
  }
  for(int i = 0;i < s[0].length();++i){
    if(visited[i] == false&&s[level][i]=='1'){
      visited[i]=true;
      dfs(s,visited,level+1);
      visited[i]=false;
    }
  }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int TT;
    cin>>TT;
    while(TT--){
      if(ans[0]==1) ans[0]=0;
      bool visited[301];
      int count=0;
      vector<string> s;
      int N;

      cin>>N;
      for(int ii=0;ii<N;ii++){
        string st;
        cin>>st;
        s.push_back(st);
      }

      for(int i=0;i<301;i++) visited[i]=false;
      dfs(s,visited,0);

      // printf("%d\n",ans[0]);
      if(ans[0]%2) printf("Odd\n");
      else printf("Even\n");

    }
    return 0;
}
