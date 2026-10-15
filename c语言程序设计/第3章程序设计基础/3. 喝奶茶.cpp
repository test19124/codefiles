#include <stdio.h>

int main() {
  int n;
  double a,sum = 0,minn = 999999;
  scanf("%d",&n);
  for(int i = 0; i < n; i++) {
    scanf("%lf",&a);
    sum += a;
    if(a < minn) {
      minn = a;
    }
  }
  if(sum < 20) {
    printf("error\n");
  } else {
    if(sum < 30) {
      printf("%.2lf\n", sum+8);
    } else if(sum < 40) {
      printf("%.2lf\n", sum+5);
    } else if(sum < 80) {
      printf("%.2lf\n", sum);
    } else {
      printf("%.2lf\n", sum-minn);
    }
  }
  return 0;
}