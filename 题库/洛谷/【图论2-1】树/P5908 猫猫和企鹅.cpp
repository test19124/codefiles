#include <bits/stdc++.h>
using namespace std;

int n,d;
int cnt,head[100010];
bool vis[100010];
struct node {
  int u,v,nxt;
} g[200010];

void init() {
  cnt = 0;
  for(int i = 0; i <= 1e5; i++) {
    head[i] = -1;
    vis[i] = false;
  }
}

int add(int u,int v) {
  cnt++;
  g[cnt].u = u;
  g[cnt].v = v;
  g[cnt].nxt = head[u];
  head[u] = cnt;
  return cnt;
}

int dfscnt(int u,int deep) {
  if(deep == -1) {
    return 0;
  }
  int sum = 1;
  for(int i = head[u]; i != -1; i = g[i].nxt) {
    if(vis[g[i].v] == false) {
      vis[g[i].v] = true;
      sum += dfscnt(g[i].v,deep-1);
      vis[g[i].v] = false;
    }
  }
  return sum;
}

int main() {
  init();
  scanf("%d%d",&n,&d);
  for(int i = 1; i < n; i++) {
    int u,v;
    scanf("%d%d",&u,&v);
    add(u,v);
    add(v,u);
  }
  vis[1] = true;
  printf("%d",dfscnt(1,d)-1);
  return 0;
}