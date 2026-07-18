#include <bits/stdc++.h>
using namespace std;

int main() {
  int w,h;
  double ax,ay,bx,by;
  scanf("%d%d%lf%lf%lf%lf",&w,&h,&ax,&ay,&bx,&by);
  double midx = (ax + bx) / 2.0;
  double midy = (ay + by) / 2.0;
  double sx,sy,ex,ey;
  if((midy/midx != ay/ax) && (midy/midx != by/bx)) {
    sx = 0;
    sy = 0;
    if(midy/midx*w > h) {
      ex = h*midx/midy;
      ey = h;
    } else {
      ex = w;
      ey = w*midy/midx;
    }
    if((double(int(by)/int(bx))==double(int(ey+0.5)/int(ex+0.5))) || (double(int(ay)/int(ax))==double(int(ey+0.5)/int(ex+0.5)))) {
      sx = w;
      sy = 0;
      double k = (midy-sy)/(midx-sx);
      if(midy-k*midx > h) {
        ex = (h+k*midx-midy)/k;
        ey = h;
      } else {
        ex = 0;
        ey = midy-k*midx;
      }
    }
  } else {
    sx = w;
    sy = 0;
    double k = (midy-sy)/(midx-sx);
    if(midy-k*midx > h) {
      ex = (h+k*midx-midy)/k;
      ey = h;
    } else {
      ex = 0;
      ey = midy-k*midx;
    }
  }
  printf("%d %d %d %d\n",int(sx),int(sy),int(ex+0.5),int(ey+0.5));
  return 0;
}