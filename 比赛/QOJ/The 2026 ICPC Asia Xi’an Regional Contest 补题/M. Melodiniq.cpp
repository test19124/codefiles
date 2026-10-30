#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  scanf("%d",&t);
  while(t--) {
    int n;
    scanf("%d",&n);
    string s[4];
    int a[4] = {0,0,0,0},b[4] = {2000,2000,2000,2000};
    for(int i = 0; i < 4; i++) {
      cin >> s[i];
    }
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < 4; j++) {
        if(s[j][i] == 'H') {
          a[j]++;
          if(a[j] >= 100) {
            for(int k = 0; k < 4; k++) {
              if(b[k] > 0 && k != j) {
                b[k] += 30;
              }
            }
            a[j] = 0;
          }
        } else if(b[j] > 0) {
          a[j] = 0;
          if(s[j][i] == 'J') {
            b[j] -= 50;
          }
          if(s[j][i] == 'A') {
            b[j] -= 100;
          }
          if(s[j][i] == 'M') {
            b[j] -= 200;
          }
        } else {
          a[j] = 0;
        }
      }
      for(int j = 0; j < 4; j++) {
        if(b[j] < 0) {
          b[j] = 0;
        }
        if(b[j] > 2000) {
          b[j] = 2000;
        }
      }
    }
    for(int i = 0; i < 4; i++) {
      printf("%d ",b[i]);
    }
    printf("\n");
  }
  return 0;
}
