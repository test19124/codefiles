#include <bits/stdc++.h>
using namespace std;

int k;
int a[20][20],b[20][20];
int n,x,y;

int main() {
  scanf("%d",&k);
  for(int i = 0; i < k; i++) {
    for(int j = 0; j < k; j++) {
      scanf("%d",&a[i][j]);
    }
  }
  for(int i = 0; i < k; i++) {
    for(int j = 0; j < k; j++) {
      scanf("%d",&b[i][j]);
    }
  }
  scanf("%d%d%d",&n,&x,&y);
  int ans = 1;
  while(y) {
    int aa = y%10;
    int bb = 0;
    for(int i = 0; i < k; i++) {
      for(int j = 0; j < k; j++) {
        if(aa == a[i][j] && (i == x%10 || j == x%10)) {
          bb += 1;
        }
        if(aa == b[i][j] && (i == x%10 || j == x%10)) {
          bb += 1;
        }
      }
    }
    y /= 10;
    //printf("%d\n",bb);
    ans *= bb;
  }
  printf("%d\n",ans);
  return 0;
}