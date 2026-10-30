#include <stdio.h>

int fact(int n) {
  int res = 1;
  for(int i = 1; i <= n; i++) {
    res *= i;
  }
  return res;
}

int main() {
  int n;
  scanf("%d",&n);
  int sum = 0;
  for(int i = 1; i <= n; i++) {
    sum += fact(i);
  }
  printf("%d\n",sum);
  return 0;
}