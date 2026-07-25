#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main() {
  cin >> s;
  n = s.length();
  int ans = 0,cnt,l,r;
  for(int i = 0; i < n; i++) {
    cnt = 0;
    ans++;
    int l = i - 1, r = i + 1;
    while(l >= 0 && r < n) {
      if(s[l] != s[r]) {
        cnt++;
      }
      if(cnt > 1) {
        break;
      }
      l--;
      r++;
      ans++;
    }
  }
  for(int i = 0; i < n - 1; i++) {
    cnt = 0;
    l = i, r = i + 1;
    while(l >= 0 && r < n) {
      if(s[l] != s[r]) {
        cnt++;
      }
      if(cnt > 1) {
        break;
      }
      l--;
      r++;
      ans++;
    }
  }
  cout << ans << '\n';
  return 0;
}