#include <stdio.h>

int main() {
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  int ans;
  if(a == 0) {
    ans = 50;
    if(b >= 10) {
      ans = 40;
    }
    ans *= b;
  } else {
    ans = 30*b;
  }
  if(c == 1) {
    ans += b*10;
  }
  printf("%d\n",ans);
  return 0;
}