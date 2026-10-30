#include <stdio.h>

int main() {
  int a,b;
  char c;
  scanf("%d%d",&a,&b);
  getchar();
  c = getchar();
  printf("%.2lf\n",(a+b+(int)(c-'0'))/3.0);
  return 0;
}