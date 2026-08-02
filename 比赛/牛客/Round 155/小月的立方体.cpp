#include <bits/stdc++.h>
using namespace std;

int a;
int b[110][110][110];

int main() {
  scanf("%d",&a);
  for(int i = 1; i <= (a+1); i++) {
    for(int j = 1; j <= (a+1); j++) {
      for(int k = 1; k <= (a+1); k++) {
        scanf("%d",&b[i][j][k]);
      }
    }
  }
  long long sum = 0;
  for(int i = 1; i <= a+1; i++) {
    sum += b[i][i][i];
  }
  for(int i = 1; i <= a+1; i++) {
    sum += b[i][i][a+2-i];
  }
  for(int i = 1; i <= a+1; i++) {
    sum += b[i][a+2-i][i];
  }
  for(int i = 1; i <= a+1; i++) {
    sum += b[a+2-i][i][i];
  }
  printf("%lld\n", sum);
  return 0;
}