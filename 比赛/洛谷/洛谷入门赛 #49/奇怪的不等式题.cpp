#include <bits/stdc++.h>
using namespace std;

long long f(int x) {
  if(x == 1) {
    return (long long)2;
  }
  if(x%2 == 1) {
    return f(x-1)*(long long)2;
  } else {
    long long t = f(x/2);
    return t*t;
  }
}

int main() {
  long long n,ans = 0;
  scanf("%lld",&n);
  for(int i = 1; f(i) <= n; i++) {
    for(long long j = 1; f(i)+j*j <= n; j++) {
      ans++;
    }
  }
  printf("%lld\n",ans);
  return 0;
}