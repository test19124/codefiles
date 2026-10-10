#include <stdio.h>

int main() {
  int minn = 98244353, maxx = -1;
  int n, a;
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    scanf("%d", &a);
    if(a < minn) {
      minn = a;
    }
    if(a > maxx) {
      maxx = a;
    }
  }
  printf("%d %d\n", maxx, minn);
  return 0;
}