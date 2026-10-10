#include <stdio.h>

int main() {
  int a;
  scanf("%d",&a);
  printf("%.2lf\n",a*0.55+((a-60)>0?(a-60)*0.1:0));
  return 0;
}