#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[200010],b[200010];
int sum[200010],f[200010][2];

int main() {
  int t;
  scanf("%d",&t);
  while(t--) {
    scanf("%d%d",&n,&m);
    for(int i = 1; i <= n; i++) {
      scanf("%d",&a[i]);
      sum[i] = sum[i-1] + a[i];
    }
    for(int i = 1; i <= m; i++) {
      scanf("%d",&b[i]);
    }
    sort(b+1,b+m+1);
    f[1][0] = sum[n];
    f[1][1] = sum[n] - 2*sum[b[1]];
    for(int i = 2; i <= m; i++) {
      f[i][0] = max(f[i-1][0], f[i-1][1]);
      f[i][1] = max(f[i-1][0]-2*sum[b[i]],f[i-1][1]-2*sum[b[i]]);
    }
    printf("%d\n",max(f[m][0], f[m][1]));
  }
  return 0;
}