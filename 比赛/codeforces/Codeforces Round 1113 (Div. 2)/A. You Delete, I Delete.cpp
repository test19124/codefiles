#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  while(n--) {
    string s;
    cin >> s;
    int i_first0 = s.find('0');
    int i_first1 = s.find('1');
    int len = s.length();
    for(int i = 0; i < len; i++) {
      if(i == i_first0 || i == i_first1) {
        continue;
      } else {
        printf("%c", s[i]);
      }
    }
    printf("\n");
  }
  return 0;
}