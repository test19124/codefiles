#include <stdio.h>

int main() {
  double a,sum = 13;
  int b;
  scanf("%lf%d",&a,&b);
  if(a > 15) {
    int t = a - 15;
    sum += t * 3.45;
    a = 15;
  }
  if(a > 3) {
    int t = a - 3;
    sum += t * 2.3;
    a = 3;
  }
  if(b == 1) {
    sum *= 1.2;
  }
  printf("%.2lf\n",sum);
  return 0;
}