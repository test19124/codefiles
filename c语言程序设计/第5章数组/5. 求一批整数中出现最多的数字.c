#include <stdio.h>

int n, t;
int a[10];

int main() {
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &t);
    while(t != 0) {
      int k = t % 10;
      a[k]++;
      t /= 10;
    }
  }
  int m = 0;
  for(int i = 0; i < 10; i++) {
    if (a[m] < a[i]) {
      m = i;
    }
  }
  for(int i = 0; i < 10; i++) {
    if(a[i] == a[m])
      printf("%d ", i);
  }
  return 0;
}