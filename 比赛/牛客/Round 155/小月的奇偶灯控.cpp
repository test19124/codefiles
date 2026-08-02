#include <bits/stdc++.h>
using namespace std;

int main() {
  int x1,x2,x3;
  scanf("%d%d%d",&x1,&x2,&x3);
  if(x1+x2+x3 == 1 || x1+x2+x3 == 3) {
    printf("ON\n");
  } else {
    printf("OFF\n");
  }
  return 0;
}