#include <bits/stdc++.h>
using namespace std;

int n,x,y;
int fa[200010];

struct node {
  int i,p;
} a[200010];

bool cmp(node x,node y) {
  return x.p < y.p;
}

void init() {
  for(int i = 0; i < 200010; i++) {
    fa[i] = i;
  }
}

int find(int i) {
  if(fa[i] != i) {
    fa[i] = find(fa[i]);
  }
  return fa[i];
}

int add(int i,int j) {
  int fai = find(i);
  int faj = find(j);
  if(fai != faj) {
    fa[fai] = faj;
  }
  return find(i);
}

int main() {
  int t;
  scanf("%d",&t);
  while(t--) {
    init();
    scanf("%d%d%d",&n,&x,&y);
    for(int i = 1; i <= n; i++) {
      a[i].i = i;
      scanf("%d",&a[i].p);
    }
    sort(a+1,a+n+1,cmp);
    if(x > y) {
      int k = y;
      y = x;
      x = k;
    }
    for(int i = 1; i <= n; i++) {
      if(i-x > 0) {
        add(i-x,i);
      }
      if(i-y > 0) {
        add(i-y,i);
      }
    }
    bool flag = true;
    for(int i = 1; i <= n; i++) {
      if(find(i) != find(a[i].i)) {
        flag = false;
        break;
      }
    }
    if(flag) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}