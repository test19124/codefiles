#include <bits/stdc++.h>
using namespace std;

int t,n;
int a[200010];

int main() {
  cin >> t;
  while (t--) {
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++) {
      cin>>a[i];
      sum += a[i];
    }
    if(n == 1) {
      cout << a[0] << '\n';
      continue;
    }
    if(sum == n) {
      cout << -1 << '\n';
      continue;
    }
    bool flag = false;
    for(int i = 1; i < n-1; i++) {
      if(a[i] >= 2) {
        flag = true;
        break;
      }
    }
    if(flag) {
      cout<<sum-1<<endl;
    } else {
      cout<<sum-n+1<<endl;
    }
  }

  return 0;
}