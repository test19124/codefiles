#include <bits/stdc++.h>
using namespace std;

int n, q;
int ans = 0;
int b[200005];
string s;

struct node {
  int l, r;
  int cnt = 0;
} g[1000010];

void build(int p, int l, int r) {
  g[p].l = l;
  g[p].r = r;
  if(l == r) {
    return;
  }
  int mid = (l + r) >> 1;
  build(p << 1, l, mid);
  build(p << 1 | 1, mid + 1, r);
}

void update(int p, int l, int r) {
  if(l <= g[p].l && g[p].r <= r) {
    g[p].cnt ^= 1;
    return;
  }
  int mid = (g[p].l + g[p].r) >> 1;
  if(l <= mid) {
    update(p << 1, l, r);
  }
  if(r > mid) {
    update(p << 1 | 1, l, r);
  }
}

int query(int p, int pos) {
  if(g[p].l == g[p].r) {
    return g[p].cnt;
  }
  int mid = (g[p].l + g[p].r) >> 1;
  int res = g[p].cnt;
  if(pos <= mid) {
    res ^= query(p << 1, pos);
  } else {
    res ^= query(p << 1 | 1, pos);
  }
  return res;
}

void flip(int l, int r) {
  if(l > r) {
    return;
  }
  if(l == 0 && r == n - 1) {
    return;
  }
  update(1, l, r);
  if(l > 0) {
    if(b[l - 1] == 0) {
      ans++;
    } else {
      ans--;
    }
    b[l - 1] ^= 1;
  }
  if(r < n - 1) {
    if(b[r] == 0) {
      ans++;
    } else {
      ans--;
    }
    b[r] ^= 1;
  }
  if(l == 0 || r == n - 1) {
    if(b[n - 1] == 0) {
      ans++;
    } else {
      ans--;
    }
    b[n - 1] ^= 1;
  }
}

int main() {
  scanf("%d%d", &n, &q);
  cin >> s;
  for (int i = 0; i < n; i++) {
    int cur = s[i] - '0';
    int nxt = s[(i + 1) % n] - '0';
    b[i] = cur ^ nxt;
    ans += b[i];
  }
  build(1, 0, n - 1);
  while (q--) {
    int l, r;
    scanf("%d%d", &l, &r);
    if(l <= r) {
      flip(l, r);
    }
    else {
      flip(l, n - 1);
      flip(0, r);
    }
    printf("%d\n", ans);
  }
  return 0;
}