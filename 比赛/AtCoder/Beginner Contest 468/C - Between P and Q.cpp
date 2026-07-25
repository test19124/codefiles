#include <bits/stdc++.h>
using namespace std;

int n;
int p[20],q[20];
bool flag[20];

int f(int *a) {
  int sum = 1;
  for(int i = 1; i <= n; i++) {
    flag[i] = false;
  }
  for(int i = 1; i <= n; i++) {
    int cnt = 0;
    for(int j = 1; j < a[i]; j++) {
      if(!flag[j]) {
        cnt++;
      }
    }
    int ans = 1;
    for(int j = 1; j <= n-i; j++) {
      ans *= j;
    }
    sum += ans*cnt;
    flag[a[i]] = true;
  }
  return sum;
}

int main() {
  scanf("%d",&n);
  for(int i = 1; i <= n; i++) {
    scanf("%d",&p[i]);
  }
  for(int i = 1; i <= n; i++) {
    scanf("%d",&q[i]);
  }
  int ans = max(0,f(q)-f(p)-1);
  printf("%d\n",ans);
  return 0;
}