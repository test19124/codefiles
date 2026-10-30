#include <stdio.h>

int ntdigit(int n,int d) {
  int count = 0;
  if(n == 0 && d == 0) {
    return 1;
  }
  if(n<0) {
    n = -n;
  }
  while(n) {
    if(n%10 == d) {
      count++;
    }
    n /= 10;
  }
  return count;
}

int main() {
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d\n",ntdigit(a,b));
  return 0;
}