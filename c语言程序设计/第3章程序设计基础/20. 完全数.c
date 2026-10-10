#include <stdio.h>

int check(int a) {
  int sum = 0;
  for(int i = 1; i < a; i++) {
    if(a%i == 0) {
      sum += i;
    }
  }
  return sum;
}

int main() {
  int n, m, tot = 0;
  scanf("%d%d", &n, &m);
  for(int i = n; i <= m; i++) {
    if(check(i) == i) {
      tot++;
      printf("%d ", i);
    }
  }
  if(tot == 0) {
    printf("No Answer\n");
  }
  return 0;
}