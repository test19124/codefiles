#include <bits/stdc++.h>
using namespace std;

string s;
int k,a[10];

int main() {
  cin>>s>>k;
  int len = s.length();
  for(int i = 0; i < len; i++) {
    a[s[i]-'0']++;
  }
  //cout<<len<<endl;
  int i = 9;
  while(i >= 0 && a[i] - k <= 0) {
    k -= a[i];
    a[i] = 0;
    i--;
  }
  a[i] -= k;
  string ans = "";
  for(int i = len-1; i >= 0; i--) {
    if(a[s[i]-'0'] > 0) {
      ans = s[i] + ans;
      a[s[i]-'0']--;
    }
  }
  len = ans.length();
  bool flag = false;
  for(int i = 0; i < len; i++) {
    if(ans[i] != '0') {
      flag = true;
    }
    if(flag) {
      cout<<ans[i];
    }
  }
  cout<<endl;
  return 0;
}