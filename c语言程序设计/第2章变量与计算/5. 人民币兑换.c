#include <stdio.h>

int main() {
  int a;
  scanf("%d",&a);
  printf("%d %d %d %d\n",a/10,a%10/5,a%10%5/2,a%10%5%2);
  return 0;
}