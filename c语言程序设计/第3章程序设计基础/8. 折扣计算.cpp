#include <stdio.h>

int main() {
  double a,b;
  scanf("%lf%lf",&a,&b);
  if(a == 1) {
    if(b >= 200) {
      printf("%.2lf\n",b*0.75);
    } else {
      printf("%.2lf\n",b*0.8);
    }
  } else {
    if(b >= 100) {
      printf("%.2lf\n",b*0.9);
    } else {
      printf("%.2lf\n",b);
    }
  }
  return 0;
}