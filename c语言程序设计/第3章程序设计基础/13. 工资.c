#include <stdio.h>

int main() {
  double s,t;
  scanf("%lf",&s);
  if(s >= 4000) {
    t = 0.25;
  } else if(s >= 3000) {
    t = 0.2;
  } else if(s >= 2000) {
    t = 0.15;
  } else if(s >= 1000) {
    t = 0.1;
  } else {
    t = 0;
  }
  printf("%.2lf\n",s*(1-t));
  return 0;
}