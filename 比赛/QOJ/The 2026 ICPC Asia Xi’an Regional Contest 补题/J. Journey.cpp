#include <bits/stdc++.h>
using namespace std;

int n;
int a[200020];
int b[200010];
char c[200010];

int main() {
  int t;
  scanf("%d",&t);
  while(t--) {
    scanf("%d", &n);
    for(int i = 1; i <= 2*n; i++) {
      int k;
      scanf("%d", &k);
      if(b[k] == 0) {
        b[k] = i;
      } else {
        a[b[k]] = i;
        a[i] = b[k];
      }
    }
  }
  return 0;
}
