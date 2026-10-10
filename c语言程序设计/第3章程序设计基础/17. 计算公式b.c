#include <stdio.h>

int main() {
  int n, sum;
  scanf("%d", &n);
  double ans = 0;
  for(int i = 1; i <= n; i++) {
    sum += i;
    ans += 1.0 / sum;
  }
  printf("%.4f\n", ans);
  return 0;
}