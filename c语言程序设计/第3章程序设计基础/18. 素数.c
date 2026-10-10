#include <stdio.h>

int n;
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
  int tot = 0;
  scanf("%d",&n);
  for(int i = 1; i <= n; i+=10) {
    if(a[i] == 0) {
      tot++;
      printf("%d ",i);
    }
  }
  if(tot == 0) {
    printf("-1\n");
  }
  printf("\n");
  return 0;
}