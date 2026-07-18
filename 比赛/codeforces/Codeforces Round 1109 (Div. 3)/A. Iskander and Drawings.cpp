#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  scanf("%d",&t);
  while(t--) {
    int len;
    string str;
    scanf("%d",&len);
    cin>>str;
    int anslen = int(str[0] == '#'), maxlen = 0;
    for(int i = 1; i < len; i++) {
      if(str[i] == '*') {
        maxlen = max(maxlen,anslen);
        anslen = 0;
      } else {
        anslen++;
      }
    }
    maxlen = max(maxlen,anslen);
    printf("%d\n", (maxlen+1)/2);
  }
  return 0;
}