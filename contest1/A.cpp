#include <iostream>
#include <stdio.h>

using namespace std;

int rooms[101];

bool emptyRooms(int N){
  for(int i=0;i<N;i++) if(rooms[i]==0) return true;
  return false;
}

int main(){
  int N,G;
  int temp;
  cin>>N>>G;
  for(int i=0;i<101;i++) rooms[i]=0;

  for(int i=0;i<G;i++){
    cin>>temp;
    while(temp){  //While we can accomodate
      if((temp%2==0&&temp!=0)||temp>2){ //If even and not 0
        if(emptyRooms(N)){  //If there are empty rooms
          for(int j=0;j<N;j++){ //Find the first empty room
            if(rooms[j]==0){
              rooms[j]=2;
              temp-=2;
              break;
            }
          }
        }else{
          int count=0;
          for(int ii=0;ii<N;ii++){
            if(rooms[ii]==1){
              rooms[ii]=2;
              count++;
            }
            if(count==2){
              temp-=2;
              break;
            }
          }
        }
      }else{  //If group is odd
        if(emptyRooms(N)){//If there are empty rooms
          for(int j=0;j<N;j++){ //Find the first empty room
            if(rooms[j]==0){
              rooms[j]=1;
              temp-=1;
              break;
            }
          }
        }else{
          for(int jj=0;jj<N;jj++){
            if(rooms[jj]==1){
              rooms[jj]=2;
              temp-=1;
              break;
            }
          }
        }
      }
    }
  }
  for(int i=0;i<N;i++) cout<<rooms[i]<<endl;
  return 0;
}
