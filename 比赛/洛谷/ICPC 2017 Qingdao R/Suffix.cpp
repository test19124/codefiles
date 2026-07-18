#include <bits/stdc++.h>
using namespace std;

string f(string str,bool flag = false) {
  string ans;
  int len = str.length();
  ans = str[len - 1];
  for(int i = len-2; i >= 0; i--) {
    if(str[i] < ans[0] || (flag && str[i] <= ans[0])) {
      ans = str[i] + ans;
    } else {
      break;
    }
  }
  return ans;
}

char strend(string str) {
  return str[str.length() - 1];
}
char strtop(string str) {
  return str[0];
}

int main() {
  int t;
  scanf("%d",&t);
  while(t--) {
    int n;
    scanf("%d",&n);
    string str1,str2,ans = "";
    if(n == 1) {
      cin>>str1;
      cout<<f(str1,true)<<endl;
      continue;
    }
    cin>>str1>>str2;
    if(n == 2) {
      if(strend(str1) <= strtop(f(str2,true))) {
        ans = f(str1,true)+f(str2);
      } else {
        ans = f(str1)+f(str2,true);
      }
      cout<<ans<<endl;
      continue;
    }
    if(strend(str1) <= strtop(f(str2,true))) {
      ans += f(str1,true);
    } else {
      ans += f(str1);
    }
    ans += f(str2,true);
    for(int i = 0; i < n - 3; i++) {
      cin>>str2;
      if(strend(str1) <= strtop(f(str2))) {
        ans += f(str1);
      } else {
        ans += f(str1,true);
      }
    }
    cin>>str2;
    if(strend(ans) <= strtop(f(str2))) {
      ans += f(str2);
    } else {
      ans += f(str2,true);
    }
    cout<<ans<<endl;
  }
  return 0;
}