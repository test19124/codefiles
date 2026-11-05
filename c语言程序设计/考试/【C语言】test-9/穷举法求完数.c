#include <stdio.h>

long divisorSum(long n) {
  long sum = 0;
  long i;
  for(i = 1; i < n; i++) {
    if(n % i == 0) {
      sum += i;
    }
  }
  return sum;
}

int main(void) {
  long m, n;
  long i;
  int found = 0;
  scanf("%ld%ld", &m, &n);
  for(i = m; i <= n; i++) {
    if(divisorSum(i) == i) {
      if(found) {
        printf(" ");
      }
      printf("%ld", i);
      found = 1;
    }
  }
  if(!found) {
    printf("No Answer");
  }
  printf("\n");
  return 0;
}