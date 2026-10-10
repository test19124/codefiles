#include <bits/stdc++.h>
using namespace std;

int t,n;
struct node {
  int a;
  int front = 0,end = 0;
  bool flag = false;
} a[100010];

int main() {
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i < n; i++) {
      scanf("%d", &a[i].a);
      sum += a[i].a;
    }
    a[1].front = 0;
    a[1].end = sum;
    for(int i = 2; i <= n; i++) {
      a[i].front = a[i-1].front + a[i-1].a;
      a[i].end = sum - a[i].front;
    }
    int id = 1;
    printf("%d %d ", 0, sum);
    a[1].flag = true;
    a[n].flag = true;
    for(int i = 1; i <= n; i++) {
      if(a[i].flag && a[n+1-i].flag) {
        i++;
      }
      if(a[i].flag == true) {
        
      }
      printf("%d \n", a[i].front, a[i].end);
    }
  }
  return 0;
}