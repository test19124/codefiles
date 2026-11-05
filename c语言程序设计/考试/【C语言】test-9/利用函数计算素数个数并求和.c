#include <stdio.h>

int n,m;
int a[1000010];

int main() {
  for(int i = 2; i <= 1000; i++) {
    if(a[i] == 1) {
      continue;
    }
    for(int j = i ; j <= 1000010; j+=i) {
      a[j] = 1;
    }
    a[i] = 0;
  }
  a[1] = 1;
  int tot = 0, sum = 0;
  scanf("%d%d",&n,&m);
  for(int i = n; i <= m; i++) {
    if(a[i] == 0) {
      tot++;
      sum += i;
    }
  }
  printf("%d %d\n",tot,sum);
  return 0;
}