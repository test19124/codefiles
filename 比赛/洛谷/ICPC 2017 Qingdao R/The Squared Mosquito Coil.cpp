#include <bits/stdc++.h>
using namespace std;

char a[50][50];

int init() {
  for(int i = 0; i < 36; i++) {
    for(int j = 0; j < 36; j++) {
      a[i][j] = ' ';
    }
  }
  return 0;
}

int f(int x,int y,int to) {
  //printf("%d %d %d\n",x,y,to);
  //system("pause");
  if(to == 1 && (a[x+1][y] == '#' || a[x-1 < 0 ? 0 : x-1][y] == '#')) {
    if(a[x][y+1] == ' ') {
      f(x,y+1,to);
    }
    return 0;
  }
  if(to == 2 && (a[x][y-1 < 0 ? 0 : y-1] == '#' || a[x][y+1] == '#')) {
    if(a[x+1][y] == ' ') {
      f(x+1,y,to);
    }
    return 0;
  }
  if(to == 3 && (a[x+1][y] == '#' || a[x-1 < 0 ? 0 : x-1][y] == '#')) {
    if(y > 0 && a[x][y-1] == ' ') {
      f(x,y-1,to);
    }
    return 0;
  }
  if(to == 4 && (a[x][y-1 < 0 ? 0 : y-1] == '#' || a[x][y+1] == '#')) {
    if(x > 0 && a[x-1][y] == ' ') {
      f(x-1,y,to);
    }
    return 0;
  }
  a[x][y] = '#';
  if(to == 1) {
    if(a[x][y+2] == '#' && a[x+2][y] == '#')  {
      return 0;
    }
    if(a[x][y+2] == '#') {
      f(x+1,y,2);
      return 0;
    } else {
      f(x,y+1,1);
      return 0;
    }
  }
  if(to == 2) {
    if(y == 1 && a[x+2][y] == '#') {
      return 0;
    }
    if(a[x+2][y] == '#' && a[x][y-2] == '#')  {
      return 0;
    }
    if(a[x+2][y] == '#') {
      f(x,y-1,3);
    } else {
      f(x+1,y,2);
    }
  }
  if(to == 3) {
    if(y == 1 && a[x][0] == ' ') {
      a[x][0] = '#';
      if(x-1 != 1) {
        f(x-1,0,4);
      }
      return 0;
    }
    if(a[x][y-2] == '#' && a[x-2][y] == '#')  {
      return 0;
    }
    if(a[x][y-2] == '#') {
      f(x-1,y,4);
      return 0;
    } else {
      f(x,y-1,3);
      return 0;
    }
  }
  if(to == 4) {
    if(a[x-2][y] == '#' && a[x][y+2] == '#')  {
      return 0;
    }
    if(a[x-2][y] == '#') {
      f(x,y+1,1);
      return 0;
    } else {
      f(x-1,y,4);
      return 0;
    }
  }
  return 0;
}

int main() {
  int t;
  scanf("%d",&t);
  while(t--) {
    int n;
    init();
    scanf("%d",&n);
    //n = t + 1;
    for(int i = 0; i < n+2; i++) {
      a[n+1][i] = a[i][n+1] = '#';
    }
    f(0,0,1);
    //printf("n=%d\n",n);
    //printf("if(n==%d) { \n",n);
    for(int i = 0; i < n; i++) {
      //printf("printf(\"");
      for(int j = 0; j < n; j++) {
        printf("%c",a[i][j]);
      }
      //printf("\\n\");\n");
      printf("\n");
    }
    //printf("}\n");
    //printf("-------------------------\n");
  }
  return 0;
}