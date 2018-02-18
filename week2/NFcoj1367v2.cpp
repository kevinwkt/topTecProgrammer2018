#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

double absl(double a){
  return a>0?a:-a;
}

int det(vector<vector<int> > matrix) {
    int size=matrix.size();

    for(int col = 0; col < size; col++) {
        bool found = false;
        for(int row = col; row < size; row++) {
            if(matrix[row][col]) {
                matrix[row].swap(matrix[col]);
                found = true;
                break;
            }
        }

        if(!found) return 0;

        for(int row = col + 1; row < size; row++) {
            while(true) {
                int del = matrix[row][col] / matrix[col][col];
                for (int j = col; j < size; j++) matrix[row][j] -= del * matrix[col][j];
                if (matrix[row][col] == 0) break;
                else matrix[row].swap(matrix[col]);
            }
        }
    }

      int det = 1;
      for(int i = 0; i < size; ++i) det *= matrix[i][i];
      return absl(det);
}

int main(){
    int TT;
    char empty;
    scanf("%d",&TT);
    vector< vector< int> > matrix;
    while(TT--){
      int N;
      scanf("%d",&N);
      scanf("%c",&empty);
      for(int ii=0;ii<N;ii++){
        vector<int> tt;
        for(int jj=0;jj<N;jj++){
          scanf("%c",&empty);
          tt.push_back((int)(empty-'0'));
          // matrix[ii][jj]=(double)(empty-'0');
        }
        scanf("%c",&empty);
        matrix.push_back(tt);
      }

      int fin=det(matrix);
      // printf("%d\n",(int)fin);


      if(!((int)fin%2)) printf("Even\n");
      else printf("Odd\n");
      matrix.clear();
    }
    return 0;
}
