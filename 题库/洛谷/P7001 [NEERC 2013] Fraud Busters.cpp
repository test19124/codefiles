#include <bits/stdc++.h>
using namespace std;

int main() {
  string str1,str2,st[1010];
  cin >> str1;
  int n, len = 9, m = 0;
  scanf("%d",&n);
  for(int i = 0; i < n; i++) {
    cin >> str2;
    bool flag = true;
    for(int j = 0; j < len && flag; j++) {
      if(str1[j] != '*' && str1[j] != str2[j]) {
        flag = false;
      }
    }
    if(flag) {
      st[m] = str2;
      m++;
    }
  }
  printf("%d\n", m);
  for (int i = 0; i < n; i++) {
    cout << st[i] << endl;
  }
  return 0;
}