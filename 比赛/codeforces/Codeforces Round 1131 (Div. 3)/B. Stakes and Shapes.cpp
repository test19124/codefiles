#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while (t--) {
    int x,y,z;
    cin>>x>>y>>z;
    int n=x+y+z;
    if (y >= z) {
      for(int i = 0; i < n; i++) {
        cout<<'R';
      }
      cout<<endl;
    } else if (z >= x) {
      for(int i = 0; i < n; i++) {
        cout<<'S';
      }
      cout<<endl;
    } else {
      for(int i = 0; i < n; i++) {
        cout<<'P';
      }
      cout<<endl;
    }
  }

  return 0;
}