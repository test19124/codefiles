#include <stdio.h>

int main() {
  int m, i;
  scanf("%d", &m);
  double ans = 0;
  for(i = 1; ans < m; i++) {
    ans += 2.5;
    if(i%5 == 0) {
      ans -= 6;
    }
  }
  printf("days=%d,money=%.2lf\n", i - 1, ans);
  return 0;
}