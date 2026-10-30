#include <bits/stdc++.h>
using namespace std;

int t,n;
int a[200010];

int main() {
  cin>>t;
  while(t--) {
    cin>>n;
    for(int i = 1; i <= n; i++) {
      cin>>a[i];
    }
    int m = 1;
    long long ansmax = -1e18;
    while(m*(m+1)/2*3<=n) {
      int len = m*(m+1)/2*3;
      long long sum = 0;
      for(int i = 1; i <= len; i++) {
        sum += a[i];
      }
      long long maxx = sum;
      for(int i = len+1; i <= n; i++) {
        sum = sum + a[i] - a[i-len];
        maxx = max(maxx, sum);
      }
      ansmax = max(ansmax, maxx);
      m++;
    }
    cout<<ansmax<<endl;
  }
  return 0;
}