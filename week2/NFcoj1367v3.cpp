#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

char matrix[301][301];
char cof[301][301];

void cofactor(int q, int level){
    int i = 0;
    int j = 0;
    for (int row = 0; row <level; row++){
        for (int col = 0; col <level; col++){
            if (row != 0 && col != q){
                cof[i][j++] = matrix[row][col];
                if (j == level-1){
                    j = 0;
                    i++;
                }
            }
        }
    }
}

int det(int level){
  int ans=0;
  if(level==1) return matrix[0][0]-'0';

  for(int i=0; i<level;i++){
    cofactor(i,level);
    ans += ((matrix[0][i]-'0')*det(level - 1));
  }

  return ans;
}

int main(){
  
    int TT;
    char trash;
    char entry;
    scanf("%d",&TT);
    while(TT--){
      // if(ans!=0) ans=0;
      int N;
      scanf("%d",&N);
      scanf("%c",&trash);
      for(int ii=0;ii<N;ii++){
        for(int jj=0;jj<N;jj++){
          scanf("%c",&matrix[ii][jj]);
        }
        scanf("%c",&trash);
      }

      int perm= det(N);
      // printf("%d\n",determinant);

      if(perm%2!=0) printf("Even\n");
      else printf("Odd\n");
    }
    return 0;
}
