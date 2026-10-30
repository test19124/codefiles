#include <stdio.h>

int main() {
  int a;
  scanf("%d",&a);
  int b = 0;
  while(a) {
    b = b*10 + a%10;
    a /= 10;
  }
  printf("%d\n",b);
  return 0;
}