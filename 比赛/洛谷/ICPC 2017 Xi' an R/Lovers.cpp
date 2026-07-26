#include <bits/stdc++.h>
using namespace std;

int t,n,m;
int a[200010],b[200010];

int main() {
  scanf("%d",&t);
  while(t--) {
    scanf("%d%d",&n,&m);
    for(int i = 1; i <= n; i++) {
      scanf("%d",&a[i]);
    }
    for(int i = 1; i <= n; i++) {
      scanf("%d",&b[i]);
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    int i = 1, j = n;
    int cnt = 0;
    while(i <= n && j > 0) {
      if(a[i] + b[j] >= m) {
        cnt++;
        i++;
        j--;
      } else {
        i++;
      }
    }
    printf("%d\n", cnt);
  }
  return 0;
}