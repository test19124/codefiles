#include <bits/stdc++.h>
using namespace std;

int n,m;
string s[200010];
int cnt[20];
bool flag[200010];
int st[200010];

int fa[200010];
long long sum[200010];
int find(int x) {
  if(fa[x] == x) return x;
  return fa[x] = find(fa[x]);
}

void add(int x,int y) {
  int fx = find(x);
  int fy = find(y);
  if(fx != fy) {
    fa[fy] = fx;
    //sum[fx] += sum[fy];
  }
}

int main() {
  scanf("%d%d",&n,&m);
  for(int i = 1; i <= n; i++) {
    cin>>s[i];
  }
  for(int i = 1; i <= n; i++) {
    fa[i] = i;
    //sum[i] = 1;
  }
  long long ans = 0;
  for(int j = 0; j < m; j++) {
    cnt[j] = 0;
    for(int i = 1; i <= n; i++) {
      if(s[i][j] == '1') {
        int fi = find(i);
        if(flag[fi] == false) {
          cnt[j]++;
          st[cnt[j]] = fi;
          sum[fi] = 0;
        }
        sum[fi]++;
        flag[fi] = true;
      }
    }

    long long cntsum = 0;
    long long delans = 0;
    for(int i = 1; i <= cnt[j]; i++) {
      cntsum += sum[st[i]];
      delans += (long long)sum[st[i]]*(sum[st[i]]-1)/((long long)2);
    }
    ans += (long long)cntsum*(cntsum-1)/((long long)2) - delans;
    if(cnt[j] != 0) {
      for(int i = 2; i <= cnt[j]; i++) {
        add(st[1],st[i]);
      }
    }

    for(int i = 1; i <= cnt[j]; i++) {
      flag[st[i]] = false;
      sum[st[i]] = 0;
    }
    /*
    if(j != 0) {
      ans += (long long)a[j]*(cnt[j]-a[j]) + a[j]*(a[j]-1)/2;
    } else {
      ans += (long long)cnt[j]*(cnt[j]-1)/2;
    }
    */
  }
  printf("%lld\n", ans);
  return 0;
}