#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,a[1010];
  scanf("%d",&n);
  for(int i = 1; i <= n; i++) {
    scanf("%d",&a[i]);
  } 
  int ans = 0;
  for(int i = 2; i < n; i++) {
    ans += int(a[i] > a[i-1] && a[i] > a[i+1]);
  }
  printf("%d\n",ans);
  return 0;
}