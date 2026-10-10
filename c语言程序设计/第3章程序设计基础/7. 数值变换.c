#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if(n >= 100 && n <= 999) {
    printf("%d\n",n%10*100+n/10%10*10+n/100);
  } else {
    printf("-1\n");
  }
  return 0;
}