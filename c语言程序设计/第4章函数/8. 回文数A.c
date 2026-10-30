#include <stdio.h>

int loop(int x) {
  int a = x;
  int b = 0;
  while(a) {
    b = b*10 + a%10;
    a /= 10;
  }
  if(b == x) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int a,b;
  scanf("%d%d",&a,&b);
  for(int i = a; i <= b; i++) {
    if(i%2 == 0 && loop(i) == 1) {
      printf("%d\n",i);
    }
  }
  printf("\n");
  return 0;
}