#include <bits/stdc++.h>
using namespace std;

int n,m,k,ww;
int f[1010][1010];
bool flag[1010][1010];
int x[10],y[10];

void init() {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      flag[i][j] = false;
    }
  }
}

int check(int a) {
  int ans = 0,w,h;
  init();
  for(int i = 0; i < k; i++) {
    w = 0, h = 0;
    for(int j = ((x[i]-a+1<0)?0:(x[i]-a+1)); j<x[i]+a&&j<n; j++) {
      if(flag[j][y[i]]==false) {
        h += f[j][y[i]];
      }
    }
    for(int j = ((y[i]-a+1<0)?0:(y[i]-a+1)); j<y[i]+a&&j<m; j++) {
      if(flag[x[i]][j]==false) {
        w += f[x[i]][j];
      }
    }
    if(h > w) {
      ans += h;
      printf("h = %d\n",h);
      for(int j = ((x[i]-a+1<0)?0:(x[i]-a+1)); j<x[i]+a&&j<n; j++) {
        flag[j][y[i]] = true;
      }
    } else {
      ans += w;
      printf("w = %d\n",w);
      for(int j = ((y[i]-a+1<0)?0:(y[i]-a+1)); j<y[i]+a&&j<m; j++) {
        flag[x[i]][j] = true;
      }
    }
  }
  return ans;
}

int main() {
  scanf("%d%d%d%d",&n,&m,&k,&ww);
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      scanf("%d",&f[i][j]);
    }
  }
  for(int i = 0; i < k; i++) {
    scanf("%d%d",&x[i],&y[i]);
    x[i] -= 1;
    y[i] -= 1;
  }
  int l = 0, r = max(n,m);
  while(l <= r) {
    int mid = (l+r)/2;
    int ans = check(mid);
    //printf("%d %d %d\n",l,r,ans);
    if(ans > ww) {
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  printf("%d\n",l);
  return 0;
}