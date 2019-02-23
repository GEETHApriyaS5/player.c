#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main () {
   double x, r, val;
   scanf("%lf",&x);
   val = PI / 180;
   r = sin(x*val);
   printf("%lf ",  r);
   
   return(0);
}
