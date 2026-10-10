#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  int b = 1;
  double s = 0;
  for(int i = 1; i <= n; i++) {
    b *= i;
    s += 1.0 / b;
  }
  printf("%.5lf\n", s);
  return 0;
}