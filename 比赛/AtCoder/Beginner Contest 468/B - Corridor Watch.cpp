#include <bits/stdc++.h>
using namespace std;

int n,d;
bool flag[1010];
string s;

int main() {
  cin >> n >> d >> s;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'G') {
      for(int j = max(0,i-d); j <= min(n-1,i+d); j++) {
        flag[j] = true;
      }
    }
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(!flag[i]) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}