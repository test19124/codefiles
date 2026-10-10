#include <stdio.h>

int n,a;
int x,y,z,k,t;

int main() {
  scanf("%d", &n);
  if(n < 5) {
    printf("人数不够\n");
    return 0;
  }
  for (int i = 1; i <= n; i++) {
    scanf("%d", &a);
    if(a >= 90) {
      x++;
    } else if(a >= 80) {
      y++;
    } else if(a >= 70) {
      z++;
    } else if(a >= 60) {
      k++;
    } else {
      t++;
    }
  }
  printf("%d %d %d %d %d\n", x, y, z, k, t);
  return 0;
}