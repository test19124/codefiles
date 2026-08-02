#include <bits/stdc++.h>
using namespace std;

int k,q;
int l,r,h,z;
int c[100000010];

int main() {
  scanf("%d%d",&k,&q);
  int n = 1<<k;

  if(n < 0) {
    printf("Hello World!\n");
    return 0;
  }

  for(int x = 1; x <= n; x++) {
    int cnt = x-1;
    int mid = cnt^(cnt/2);
    int rev = 0;
    for(int i = 0; i < k; i++) {
      rev = (rev<<1) | (mid&1);
      mid >>= 1;
    }
    c[x] = rev;
  }
  while(q--) {
    scanf("%d%d%d%d",&l,&r,&h,&z);
    long long mod = 1LL<<h;
    int ans = 0;
    for(int i = l; i <= r; i++) {
      if(c[i]%mod == z) {
        ans++;
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}