#include <bits/stdc++.h>
using namespace std;

int n;
int f(int x,bool flag) {
  if(x == 0 || x == 1) {
    return 1;
  }
  if(flag) {
    return f(x-1,false);
  }
  return f(x-1,false)+f(x-2,true);
}

int main() {
  scanf("%d",&n);
  printf("%d",f(n,false));
  return 0;
}