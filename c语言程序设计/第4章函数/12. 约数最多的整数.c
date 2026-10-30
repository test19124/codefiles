#include <stdio.h>

int getCount(int m);

int main(void) {
  int m;
  int maxCount = 0;
  int maxNum = 0;
  while(1) {
    scanf("%d", &m);
    if(m == -1) {
       break;
    }
    int count = getCount(m);
    if(count >= maxCount) {
      maxCount = count;
      maxNum = m;
    }
  }
  printf("%d %d\n", maxNum, maxCount);
  return 0;
}

int getCount(int m) {
  int count = 0;
  for(int i = 1; i <= m; i++) {
    if(m%i == 0) {
      count++;
    }
  }
  return count;
}