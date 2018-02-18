#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  int N,M,drop,HOWMANY;
  cin>>N>>M>>HOWMANY;
  int start=0;
  int end=M-1;
  int count=0;
  for(int i=0;i<HOWMANY;i++){
    cin>>drop;
    if(drop>end+1){
      int tt=(drop-end-1);
      start+=tt;
      end+=tt;
      count+=tt;
    }else if(drop<start+1){
      int tt=(start-drop+1);
      end-=tt;
      start-=tt;
      count+=tt;
    }
  }
  cout<<count<<endl;
  return 0;
}
