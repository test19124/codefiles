#include <bits/stdc++.h>
using namespace std;

int n;
string s,t,ans;

char add(char c,int x) {
  return (c-'A'+x+5)%5+'A';
}

string change(string ss,int c,int p,int q) {
  for(int i = 0; i < n; i++) {
    if(i <= c) {
      ss[i] = add(ss[i],p);
    } else {
      ss[i] = add(ss[i],q);
    }
  }
  return ss;
}

int cntdiff(string a,string b) {
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] != b[i]) cnt++;
  }
  return cnt;
}

int main() {
  cin>>n>>s>>t;
  int minn = n+1;
  for(int i = 0; i < n; i++) {
    for(int p = 0; p < 5; p++) {
      for(int q = 0; q < 5; q++) {
        ans = change(s,i,p,q);
        minn = min(minn,cntdiff(ans,t));
      }
    }
  }
  cout<<minn<<endl;
  return 0;
}