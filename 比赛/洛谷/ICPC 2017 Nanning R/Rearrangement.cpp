#include <bits/stdc++.h>
using namespace std;

int t,n;
int a[2][10010];
int cnt[3];

int main() {
  scanf("%d",&t);
  while(t--) {
    for(int i=0;i<3;i++) {
      cnt[i] = 0;
    }
    scanf("%d",&n);
    for(int i=0;i<2;i++) {
      for(int j=0;j<n;j++) {
        scanf("%d",&a[i][j]);
        a[i][j] = a[i][j]%3;
        cnt[a[i][j]]++;
        if(a[i][j] == 2) {
          a[i][j] = -1;
        }
      }
    }
    
  }
  return 0;
}