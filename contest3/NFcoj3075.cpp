#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
  int t;
  double pi=3.141592653589;

  scanf("%d",&t);

  printf("%.6lf\n",pi*t*t);
  double circ=4*t*(sqrt(2));
  double newpi=circ/(2*t);
  printf("%.6lf\n",(double)(int)(newpi*t*t));
  return 0;
}
