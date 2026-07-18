#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n,x,y;
  scanf("%lld%lld%lld",&n,&x,&y);
  long long ans = 0,a;
  for(int i = 0; i < n; i++) {
    scanf("%lld",&a);
    a += 2;
    ans += a%x == 0 ? a/x : a/x + 1;
  }
  printf("%lld\n", ans%y == 0 ? ans/y : ans/y + 1);
  return 0;
}