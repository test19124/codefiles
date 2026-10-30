#include <bits/stdc++.h>
using namespace std;

int n,t;
int l[1000010];
int r[1000010];
int a[1000010];

int main() {
  scanf("%d",&t);
  while(t--) {
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) {
      scanf("%d%d",&l[i],&r[i]);
    }
    a[1] = r[1];
    for(int i = 2; i <= n; i++) {
      if(a[i-1] < r[i]) {
        if(a[i-1] >= l[i]) {
          a[i] = a[i-1];
        } else {
          a[i] = r[i];
        }
      } else {
        a[i] = r[i];
      }
    }
    for(int i = 1; i <= n; i++) cout<<a[i]<<" ";
    int maxx = a[1];
    int cnt = 1;
    for(int i = 2; i <= n; i++) {
      if(a[i] > maxx) {
        cnt++;
        maxx = a[i];
      }
    }
    printf("%d\n",cnt);
  }
  return 0;
}