#include <stdio.h>

int a,x,y,z;

int main() {
  while(1) {
    scanf("%d",&a);
    if(a == -1) {
      printf("%d %d %d\n",x,y,z);
      return 0;
    }
    if(a > 0) {
      x++;
    } else if(a < 0) {
      y++;
    } else {
      z++;
    }
  }
  return 0;
}
