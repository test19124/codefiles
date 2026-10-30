#include <stdio.h>

int a[10][10];

int main() {
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 5; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for(int j = 0; j < 5; j++) {
    int minj = a[0][j];
    for(int i = 1; i < 3; i++) {
      if(a[i][j] < minj) {
        minj = a[i][j];
      }
    }
    a[4][j] = minj;
  }
  printf("%d\n", a[4][3]);
  return 0;
}