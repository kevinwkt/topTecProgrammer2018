#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  int n;
  while(true){
    cin>>n;
    if(n==-1) break;
    long long sum=0;
    int temp;
    int count=0;
    for(int i=0;i<n;i++){
      cin>>temp;
      sum+=temp;
      if(sum%100==0) count++;
    }
    cout<<count<<endl;
  }
  return 0;
}
