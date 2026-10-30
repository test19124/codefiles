#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int aa = 0,bb = 0;
  cin>>n;
  string a,b;
  cin>>a>>b;
  for(int i = 0; i < n; i++) {
    if(int(a[i]-'0') == 0) {
      aa++;
    } else {
      bb++;
    }
  }
  for(int i = 0; i < n; i++) {
    if(int(b[i]-'0') == 0) {
      aa++;
    } else {
      bb++;
    }
  }
  cout<<aa<<" "<<bb<<endl;
  return 0;
}