#include <bits/stdc++.h>
using namespace std;

int n;
long long a[200010];

int main() {
  int t;
  scanf("%d",&t);
  while(t--) {
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
      scanf("%lld",&a[i]);
    }
    bool flag = true;
    for(int i = 0; i < n; i++) {
      long long t = a[i] - (i + 1);
      if(t < 0) {
        flag = false;
        break;
      }
      a[i] = i + 1;
      a[i+1] += t;
    }
    if(flag) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}
