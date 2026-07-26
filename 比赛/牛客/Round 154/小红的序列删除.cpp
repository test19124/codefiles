#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[10];
string s;

int f() {
  if(a[1] == 0 && a[3] == 0 ||
     a[1] == 0 && a[4] == 0 ||
     a[2] == 0 && a[3] == 0 ||
     a[2] == 0 && a[4] == 0) {
    if(a[1] != 0) {
      return 1;
    } else if(a[2] != 0) {
      return 2;
    } else if(a[3] != 0) {
      return 3;
    } else {
      return 4;
    }
  }
  if(a[1] == 0 || a[2] == 0) {
    if(a[3] > a[4]) {
      return 4;
    } else {
      return 3;
    }
  }
  if(a[3] == 0 || a[4] == 0) {
    if(a[1] > a[2]) {
      return 2;
    } else {
      return 1;
    }
  }
  if(a[1] > a[2]) {
    return 2;
  } else {
    return 1;
  }
}

int main() {
  scanf("%d%d",&n,&k);
  cin >> s;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'U') {
      a[1]++;
    } else if(s[i] == 'D') {
      a[2]++;
    } else if(s[i] == 'L') {
      a[3]++;
    } else if(s[i] == 'R') {
      a[4]++;
    }
  }
  for(int i = 0; i < k; i++) {
    a[f()]--;
  }
  for(int i = 0; i < n; i++) {
    if(s[i] == 'U' && a[1] > 0) {
      printf("%c",s[i]);
      a[1]--;
    } else if(s[i] == 'D' && a[2] > 0) {
      printf("%c",s[i]);
      a[2]--;
    } else if(s[i] == 'L' && a[3] > 0) {
      printf("%c",s[i]);
      a[3]--;
    } else if(s[i] == 'R' && a[4] > 0) {
      printf("%c",s[i]);
      a[4]--;
    }
  }
  printf("\n");
  return 0;
}