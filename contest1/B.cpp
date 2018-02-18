#include <iostream>
#include <stdio.h>

using namespace std;

int sum(int n){
  if(n==1) return 1;
  if(n==2) return 2;
  int a=1;
  int b=1;
  int sum=0;
  for(int i=0;i<n;i++){
    int temp=a+b;
    sum+=(a);
    a=b;
    b=temp;
  }
  return sum;
}

int main(){
  int year;
  while(true){
    cin>>year;
    if(year==-1) break;

    // int males=sum(year);
    cout<<sum(year)<<" "<<sum(year+1)<<endl;
  }
  return 0;
}
