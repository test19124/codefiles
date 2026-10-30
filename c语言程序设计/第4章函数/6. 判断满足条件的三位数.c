#include <stdio.h>

int check(int n) {
  int a = n / 100;
  int b = (n / 10) % 10;
  int c = n % 10;
  if(a == b || a == c || b == c) {
    for(int i = 1; i <= n; i++) {
      if(i*i == n) {
        return 1;
      }
    }
  }
  return 0;
}

int main() {
  int n;
  scanf("%d",&n);
  int cnt = 0;
  for(int i = 101; i <= n; i++) {
    if(check(i)) {
      cnt++;
    }
  }
  printf("%d\n",cnt);
  return 0;
}