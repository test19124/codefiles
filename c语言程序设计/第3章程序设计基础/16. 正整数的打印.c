#include <stdio.h>

int tot;
int a[10];

int main() {
  int n;
  scanf("%d", &n);
  while(n) {
    tot++;
    a[tot] = n % 10;
    n /= 10;
  }
  printf("%d\n", tot);
  for(int i = tot; i >= 1; i--) {
    printf("%d", a[i]);
  }
  printf("\n");
  for(int i = 1; i <= tot; i++) {
    printf("%d", a[i]);
  }
  printf("\n");
  return 0;
}