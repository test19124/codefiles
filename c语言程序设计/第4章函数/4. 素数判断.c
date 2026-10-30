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
  if(a[n] == 0) {
    printf("1\n");
  } else {
    printf("0\n"); 
  }
  return 0;
}