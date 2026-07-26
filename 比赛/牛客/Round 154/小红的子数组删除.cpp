#include <bits/stdc++.h>
using namespace std;

int n,k,x;
int a[100010];
int maxa[100010];
int mina[100010];

int main() {
  scanf("%d%d%d",&n,&k,&x);
  for(int i = 1; i <= n; i++) {
    scanf("%d",&a[i]);
    if(a[i] > x) {
      maxa[i]++;
    }
    if(a[i] < x) {
      mina[i]++;
    }
    maxa[i] += maxa[i-1];
    mina[i] += mina[i-1];
  }
  int m = n - k;
  if(m == 0) {
    printf("0\n");
    return 0;
  }
  int limit;
  if(m & 1) limit = (m - 1) / 2;
  else limit = m / 2;
  int ans = 0;
  for(int l = 1; l <= n-k+1; l++) {
    if(mina[n] - (mina[l+k-1] - mina[l-1]) <= limit && maxa[n] - (maxa[l+k-1] - maxa[l-1]) <= limit) {
      ans++;
    }
  }
  printf("%d\n", ans);
  return 0;
}