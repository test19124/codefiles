#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d",&n);
  for(int i = 1; i <= n; i++) {
    printf("%d ",i);
  }
  printf("\n");
  for(int i = n; i >= 1; i--) {
    printf("%d ",i);
  }
  printf("\n");
  return 0;
}