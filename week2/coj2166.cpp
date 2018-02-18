#include <iostream>
#include <stdio.h>

using namespace std;

int arr[51];

int main(){
  int n;
  cin>>n;
  while(n--){
    int size, target,count=0;
    cin>>size>>target;
    for(int i=0;i<size;i++){
      cin>>arr[i];
    }
    for(int i=0;i<size;i++){
      if((arr[i]>=arr[target-1])&&(arr[i]>0)) count++;
    }
    cout<<count<<endl;
  }
  return 0;
}
