#include <stdio.h>

int a[50];

int main() {
  int n;
  int maxi = 0;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    if(a[i] > a[maxi]) {
      maxi = i;
    }
  }
  printf("%d %d\n", a[maxi], maxi);
  return 0;
}