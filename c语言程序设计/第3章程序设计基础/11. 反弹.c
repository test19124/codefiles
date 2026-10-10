#include <stdio.h>

int main() {
  double n, m, sum = 0;
  scanf("%lf%lf", &n, &m);
  sum += n;
  m--;
  while(m--) {
    n /= 4.0;
    sum += n*2;
  }
  printf("%.2lf\n%.2lf\n", sum, n/4.0);
  return 0;
}