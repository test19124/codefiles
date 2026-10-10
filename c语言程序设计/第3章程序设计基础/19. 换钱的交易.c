#include <stdio.h>

int main() {
  int n;
  int ans = 1;
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    ans *= 2;
  }
  printf("%d\n%d\n", n*100000, ans-1);
  return 0;
}