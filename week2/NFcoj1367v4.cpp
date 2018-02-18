#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

char m[301][301];
char cof[301][301];

int det(char matrix[], int matSize){
  int ans=0;
  if(matSize==1) return matrix[0][0]-'0';
  if(matSize==2) return (matrix[0][0]-'0')*(matrix[1][1]-'0')-(matrix[0][1]-'0')*(matrix[1][0]-'0');

  for(int sign=0;sign<matSize;sign++) {
    int ii=0;
    int jj=0;
    for(i=1;i<matSize;i++) {
      for( j=0;j<matSize;j++) {
        if(j==sign) continue;
        cof[ii][jj] = matrix[i][j];
        jj++;
        if(jj==matSize-1) {
          ii++;
          jj = 0;
        }
      }
    }
    det=det+matrix[0][sign]*det(matrix,matSize-1);
  }

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int TT;
    char trash;
    char entry;
    scanf("%d",&TT);
    while(TT--){
      // if(ans!=0) ans=0;
      vector<string> s;
      int N;
      scanf("%d",&N);
      scanf("%c",&trash);
      for(int ii=0;ii<N;ii++){
        for(int jj=0;jj<N;jj++){
          scanf("%c",&m[ii][jj]);
        }
        scanf("%c",&trash);
      }


      int determinant= det(m,N);
      printf("%d\n",determinant);

      // if(!parity(determinant)) printf("Even\n");
      // else printf("Odd\n");
    }
    return 0;
}
