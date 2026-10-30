#include <bits/stdc++.h>
using namespace std;

int n;
int a[200010];

int main() {
  int t;
  cin>>t;
  while(t--) {
    cin>>n;
    for(int i = 1; i <= n; i++) {
      cin>>a[i];
    }
    long long sum = 0;
    /*
    for(int i = 1; i <= n; i++) {
      for(int j = i; j <= n; j++) {
        //sum += min(a[i],a[j]) + max(0,a[j]-a[i]);
        sum += max(a[i],a[j]);
      }
    }
    */
    //sort(a+1, a+n+1);
    for(int i = 1; i <= n; i++) {
      sum += a[i]*i;
    }
    cout<<sum<<endl;
  }
  return 0;
}