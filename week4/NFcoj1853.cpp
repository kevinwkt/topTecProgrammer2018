#include <stdio.h>

using namespace std;

double comb(int a, int b){
  if(a>=3) return (a*(a-1)*(a-2))/6;
  return 1;
}

int main(){

  int T;
  scanf("%d",&T);

  while(T--){

    int n;
    scanf("%d",&n);
    n++;
    // printf("%d\n",n);
    double tot=comb(n*n,3);
    // printf("%lf\n",tot);
    if(n>=3){
      tot=tot-(2*n*comb(n,3));
      for(int i=3;i<n;i++){
        tot=tot-(4*comb(i,3));
      }
      tot=tot-(2*comb(n,3));
      // printf("%lf\n",tot);
    }
    if(n>=5){
      for(int i=2;i<(int)(n/2)+1;i++){
        tot=tot-(4*(n-i)*comb((int)(n/i),3));
      }
    }
    printf("%d\n",(int)tot);
  }
  return 0;
}
