#include <bits/stdc++.h>
using namespace std;

int ans[110];

int main() {
  int t;
  scanf("%d",&t);
  while(t--) {
    int k;
    scanf("%d",&k);
    if(ans[k] != 0) {
      printf("%d",ans[k]);
      continue;
    }
    int n = 0;
    for(int i = 1; i <= k; i++) {
      n *= 2;
      n += 1;
      ans[i] = n;
    }
    printf("%d\n",ans[k]);
  }
  return 0;
}