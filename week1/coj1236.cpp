#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  int p,m,g;
  scanf("%d %d %d",&p,&m,&g);

  int multA=a+b;
  int multB=c+d;

  int forp1=(p/(multA))+1;
  if(((p/(multA))*multA)==p) forp1--;
  int forp2=(p/(multB))+1;
  if(((p/(multA))*multA)==p) forp2--;

  int form1=(m/(multA))+1;
  if(((m/(multA))*multA)==m) form1--;
  int form2=(m/(multB))+1;
  if(((m/(multB))*multB)==m) form2--;

  int forg1=(g/(multA))+1;
  if(((g/(multA))*multA)==g) forg1--;
  int forg2=(g/(multB))+1;
  if(((g/(multB))*multB)==g) forg2--;

  int count=0;
  if(p<=((forp1*multA)-b)) count++;
  if(p<=((forp2*multB)-d)) count++;
  if(count==0) printf("none\n");
  else if(count==1) printf("one\n");
  else if(count==2) printf("both\n");
  count=0;

  if(m<=((form1*multA)-b)) count++;
  if(m<=((form2*multB)-d)) count++;
  if(count==0) printf("none\n");
  else if(count==1) printf("one\n");
  else if(count==2) printf("both\n");
  count=0;

  if(g<=((forg1*multA)-b)) count++;
  if(g<=((forg2*multB)-d)) count++;
  if(count==0) printf("none\n");
  else if(count==1) printf("one\n");
  else if(count==2) printf("both\n");

  return 0;
}
