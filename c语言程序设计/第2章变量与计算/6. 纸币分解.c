#include <stdio.h>

int main() {
  double a;
  scanf("%lf",&a);
  printf("%d张十元\n%d张五元\n%d张一元\n%d个五角\n%d个一角\n%d个贰分\n%d个壹分\n", (int)(a)/10, (int)(a)%10/5, (int)(a)%10%5, (int)(a*100/10)%10/5, (int)(a*100/10)%10%5, (int)(a*100)%10/2, (int)(a*100)%10%2);
  return 0;
}