#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  double sum = 2;
  int a = 2, b = 1;
  for(int i = 0; i < n - 1; i++) {
    int k = a;
    a = a + b;
    b = k;
    sum += (double)a/b;
  }
  printf("%.2lf\n", sum);
  return 0;
}