#include <bits/stdc++.h>
using namespace std;

int n;
int a[200][200];

int main() {
  scanf("%d",&n);
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      scanf("%d",&a[i][j]);
      a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];
    }
  }
  int ans = -998244353;
  for(int k = 1; k <= n; k++) {
    for(int h = 1; h <= n; h++) {
      for(int i = 1; i <= n-k+1; i++) {
        for(int j = 1; j <= n-h+1; j++) {
          ans = max(ans,a[i+k][j+h]-a[i-1][j]-a[i][j-1]+a[i-1][j-1]);
        }
      }
    }
  }
  printf("%d\n",ans);
  return 0;
}