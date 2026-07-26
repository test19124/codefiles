#include <bits/stdc++.h>
using namespace std;

int t,n,q;
int a[100010];
int b[100010][50];
int c[100010][50];

/*
struct node {
  int l,r,xor_sum;
} g[400010];

void build(int p,int l,int r) {
  g[p].l = l;
  g[p].r = r;
  if(l == r) {
    g[p].xor_sum = a[l];
    return;
  }
  int mid = (l + r) >> 1;
  build(p << 1, l, mid);
  build(p << 1 | 1, mid + 1, r);
  g[p].xor_sum = g[p << 1].xor_sum ^ g[p << 1 | 1].xor_sum;
}

int xor_sum(int p,int l,int r) {
  if(g[p].l >= l && g[p].r <= r) {
    return g[p].xor_sum;
  }
  int mid = (g[p].l + g[p].r) >> 1;
  int ans = 0;
  if(l <= mid) {
    ans ^= xor_sum(p << 1, l, r);
  }
  if(r > mid) {
    ans ^= xor_sum(p << 1 | 1, l, r);
  }
  return ans;
}
*/

void to2(int i) {
  int x = a[i];
  int j = 0;
  while(x) {
    b[i][j] = x % 2;
    x /= 2;
    j++;
  }
}

void init() {
  for(int i = 0; i <= 100000; i++) {
    for(int j = 0; j <= 40; j++) {
      b[i][j] = c[i][j] = 0;
    }
  }
}

int main() {
  scanf("%d",&t);
  while(t--) {
    init();
    scanf("%d%d",&n,&q);
    for(int i = 1; i <= n; i++) {
      scanf("%d",&a[i]);
      to2(i);
      for(int j = 0; j < 40; j++) {
        b[i][j] ^= b[i-1][j];
        c[i][j] = c[i-1][j] + b[i][j];
      }
    }
    while(q--) {
      int l,r;
      scanf("%d%d",&l,&r);
      long long sum = 0;
      for(int j = 0; j < 40; j++) {
        int len = r - l + 2;
        int cnt = c[r][j];
        if(l != 1) {
          cnt -= c[l-2][j];
        }
        long long k = 1LL * cnt * (len - cnt) % 1000000007;
        sum += ( (1LL << j) % 1000000007 ) * k;
        sum %= 1000000007;
      }
      printf("%lld\n",sum);
    }
    /*
    build(1, 1, n);
    while(q--) {
      int l,r;
      scanf("%d%d",&l,&r);
      int len = r - l + 1;
      long long sum = 0;
      for(int i = 1; i <= len; i++) {
        for(int j = l; j <= r-i+1; j++) {
          sum += xor_sum(1, j, j+i-1);
        }
      }
      printf("%lld\n",sum);
    }
    */
  }
  return 0;
}