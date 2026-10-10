#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  while(n--) {
    int a[5];
    scanf("%d%d%d%d",&a[1],&a[2],&a[3],&a[4]);
    int cnt = 0;
    for(int i = 1; i <= 4; i++) {
      if(a[i]) {
        cnt++;
      }
    }
    if(cnt == 0) {
      printf("Typically Otaku\n");
    } else if(cnt == 1) {
      printf("Eye-opener\n");
    } else if(cnt == 2) {
      printf("Young Traveller\n");
    } else if(cnt == 3) {
      printf("Excellent Traveller\n");
    } else {
      printf("Contemporary Xu Xiake\n");
    }
  }
  return 0;
}