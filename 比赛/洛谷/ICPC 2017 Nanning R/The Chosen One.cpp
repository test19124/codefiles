#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100;
struct longint {
  int a[MAXN];
  longint() {
    init();
  }
  longint(string s) {
    set(s);
  }
  void init() {
    memset(a, 0, sizeof(a));
  }
  void set(string s) {
    init();
    int len = s.length();
    for(int i = 0; i < len; i++) {
      a[i] = s[len - 1 - i] - '0';
    }
  }
  void print() {
    int i = MAXN - 1;
    while(i > 0 && a[i] == 0) i--;
    for(; i >= 0; i--) {
      printf("%d", a[i]);
    }
    printf("\n");
  }
  longint operator*(const longint &x) const {
    longint res;
    for(int i = 0; i < MAXN; i++) {
      if(a[i] == 0) {
        continue;
      }
      for(int j = 0; j < MAXN - i; j++) {
        if(x.a[j] == 0) {
          continue;
        }
        res.a[i + j] += a[i] * x.a[j];
      }
    }
    int y = 0;
    for(int i = 0; i < MAXN; ++i) {
        int tmp = res.a[i] + y;
        res.a[i] = tmp % 10;
        y = tmp / 10;
    }
    return res;
  }
  longint operator/(const int &x) const {
    longint res;
    res.init();
    int y = 0;
    for(int i = MAXN-1; i >= 0; i--) {
      int tmp = y * 10 + a[i];
      res.a[i] = tmp / x;
      y = tmp % x;
    }
    return res;
  }
  bool operator>(const longint &x) const {
    for(int i = MAXN-1; i >= 0; i--) {
      if(a[i] > x.a[i]) {
        return true;
      }
      if(a[i] < x.a[i]) {
        return false;
      }
    }
    return false;
  }
  bool operator>(const string &x) {
    longint tmp;
    tmp.init();
    tmp.set(x);
    return *this > tmp;
  }
};

longint power2(int n) {
  if(n == 0) return longint("1");
  if(n%2 == 1) {
    return power2(n-1) * longint("2");
  }
  longint k = power2(n/2);
  return k*k;
}

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    string k;
    cin >> k;
    longint a;
    a.set(k);
    int cnt = 0;
    while(a > "0") {
      a = a / 2;
      cnt++;
    }
    cnt--;
    longint res = power2(cnt);
    res.print();
  }
  return 0;
}