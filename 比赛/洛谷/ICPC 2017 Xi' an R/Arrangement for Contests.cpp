#include <bits/stdc++.h>
using namespace std;

int t,n,k;
long long a[100010];

struct node {
  int minn,l,r,k;
} g[400010];

void build(int p,int l,int r) {
  g[p].l = l;
  g[p].r = r;
  g[p].k = 0;
  if(l == r) {
    g[p].minn = a[l];
    return;
  }
  int mid = (l + r) >> 1;
  build(p << 1, l, mid);
  build(p << 1 | 1, mid + 1, r);
  g[p].minn = min(g[p << 1].minn, g[p << 1 | 1].minn);
}

void pushdown(int p) {
  if(g[p].k != 0) {
    int v = g[p].k;
    g[p << 1].minn -= v;
    g[p << 1].k += v;
    g[p << 1 | 1].minn -= v;
    g[p << 1 | 1].k += v;
    g[p].k = 0;
  }
}

int query_min(int p,int l,int r) {
  if(g[p].l >= l && g[p].r <= r) {
    return g[p].minn;
  }
  pushdown(p);
  int mid = (g[p].l + g[p].r) >> 1;
  int ans = 1e9+7;
  if(l <= mid) ans = min(ans, query_min(p << 1, l, r));
  if(r > mid) ans = min(ans, query_min(p << 1 | 1, l, r));
  return ans;
}

void add(int p,int l,int r,int x) {
  if(g[p].l >= l && g[p].r <= r) {
    g[p].minn -= x;
    g[p].k += x;
    return;
  }
  pushdown(p);
  int mid = (g[p].l + g[p].r) >> 1;
  if(l <= mid) {
    add(p << 1, l, r, x);
  }
  if(r > mid) {
    add(p << 1 | 1, l, r, x);
  }
  g[p].minn = min(g[p << 1].minn, g[p << 1 | 1].minn);
}

int main() {
  scanf("%d",&t);
  while(t--) {
    scanf("%d%d",&n,&k);
    for(int i = 1; i <= n; i++) {
      scanf("%lld",&a[i]);
    }
    build(1, 1, n);
    long long cnt = 0;
    for(int i = 1; i <= n-k+1; i++) {
      long long minn = query_min(1, i, i+k-1);
      add(1, i, i+k-1, minn);
      cnt += minn;
    }
    printf("%lld\n", cnt);
  }
  return 0;
}