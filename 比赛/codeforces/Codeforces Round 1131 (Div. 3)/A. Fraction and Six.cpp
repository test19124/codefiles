#include <bits/stdc++.h>
using namespace std;

int t;
string s1,s2;
int a[30],b[30];

int main() {
  cin>>t;
  while(t--) {
    int len1,len2;
    cin>>len1>>len2;
    cin>>s1>>s2;
    for(int i = 0; i < 30; i++) {
      a[i] = 0;
      b[i] = 0;
    }
    for(int i = 0; i < len2; i++) {
      a[s2[i]-'a']++;
    }
    string ans = "";
    for(int i = 0; i < len1; i++) {
      if(a[s1[i]-'a'] == 0) {
        ans += s1[i];
      } else {
        a[s1[i]-'a']--;
      }
    }
    int len = ans.length();
    if(len == 3 && len == len1-len2) {
      b[ans[0]-'a']++;
      b[ans[1]-'a']++;
      b[ans[2]-'a']++;
      if(b['s'-'a'] == 1 && b['i'-'a'] == 1 && b['x'-'a'] == 1) {
        cout<<"YES\n";
      } else {
        cout<<"NO\n";
      }
    } else {
      cout<<"NO\n";
    }
  }
  return 0;
}