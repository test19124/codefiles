#include <stdio.h>

int main() {
  int p,w,s;
  double d;
  scanf("%d%d%d",&p,&w,&s);
  if(s >= 3000) {
    d = 0.15;
  } else if(s >= 2000) {
    d = 0.1;
  } else if(s >= 1000) {
    d = 0.08;
  } else if(s >= 500) {
    d = 0.05;
  } else if(s >= 250) {
    d = 0.02;
  } else {
    d = 0;
  }
  printf("freight=%.2lf\n",p*w*s*(1-d));
  return 0;
}