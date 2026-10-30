#include <bits/stdc++.h>
using namespace std;

int t,n,x;
int c[200010];
bool flag[200010];

bool cmp(int a,int b) {
  return a<b;
}

int main() {
  cin>>t;
  while(t--) {
    cin>>n>>x;
    int a = 0, b = 0;
    long long sum = 0;
    for(int i = 1; i <= n; i++) {
      flag[i] = false;
    }
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i = 1; i <= n; i++) {
      cin>>c[i];
      a++;
      pq.push(c[i]);
      if(a-b > x) {
        /*
        int minc = c[i], mini = i;
        for(int j = 1; j < i; j++) {
          if(flag[j] == false) {
            if(minc > c[j]) {
              minc = c[j];
              mini = j;
            }
          }
        }
        flag[mini] = true;
        sum += minc;
        */
        sum += pq.top();
        pq.pop();
        a--;
        b++;
      }
    }
    if(a > b) {
      cout<<sum<<endl;
    } else {
      cout<<-1<<endl;
    }
  }
  return 0;
}