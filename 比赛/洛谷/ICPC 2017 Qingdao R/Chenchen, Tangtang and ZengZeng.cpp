#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string a[3],ans;
  scanf("%d",&n);
  while(n--) {
    cin>>a[0]>>a[1]>>a[2];
    ans = "ongoing";
    if(a[0][0]==a[0][1] && a[0][1] == a[0][2] && a[0][2] != '.') {
      ans = a[0][0];
    } else if(a[1][0]==a[1][1] && a[1][1] == a[1][2] && a[1][2] != '.') {
      ans = a[1][0];
    } else if(a[2][0]==a[2][1] && a[2][1] == a[2][2] && a[2][2] != '.') {
      ans = a[2][0];
    } else if(a[0][0]==a[1][0] && a[1][0] == a[2][0] && a[2][0] != '.') { 
      ans = a[0][0];
    } else if(a[0][1]==a[1][1] && a[1][1] == a[2][1] && a[2][1] != '.') {
      ans = a[0][1];
    } else if(a[0][2]==a[1][2] && a[1][2] == a[2][2] && a[2][2] != '.') {
      ans = a[0][2];
    } else if(a[0][0]==a[1][1] && a[1][1] == a[2][2] && a[2][2] != '.') {
      ans = a[0][0];
    } else if(a[2][0]==a[1][1] && a[1][1] == a[0][2] && a[0][2] != '.') {
      ans = a[2][0];
    }
    cout<<ans<<endl;
  }
  return 0;
}