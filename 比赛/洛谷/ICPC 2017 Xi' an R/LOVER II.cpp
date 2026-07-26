#include <bits/stdc++.h>
using namespace std;

int t,n,m,k,q;
int a[200010],b[200010];
int c[200010];

int main() {
  scanf("%d",&t);
  while(t--) {
    scanf("%d%d%d",&n,&m,&k);
    for(int i = 1; i <= n; i++) {
      scanf("%d",&a[i]);
    }
    for(int i = 1; i <= m; i++) {
      scanf("%d",&b[i]);
    }
    sort(a + 1, a + n + 1);
    scanf("%d",&q);
    while(q--) {
      int l,r;
      scanf("%d%d",&l,&r);
      if(r-l+1 < n) {
        printf("0\n");
        continue;
      }
      for(int i = l; i <= r; i++) {
        c[i] = b[i];
      }
      sort(c + l, c + r + 1);
      int i = 1, j = r;
      bool flag = true;
      while(flag && i <= n && j > l-1) {
        if(a[i] + c[j] >= k) {
          i++;
          j--;
        } else {
          flag = false;
        }
      }
      if(flag) {
        printf("1\n");
      } else {
        printf("0\n");
      }
    }
  }
  return 0;
}