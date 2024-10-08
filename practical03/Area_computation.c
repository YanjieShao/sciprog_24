#include <stdio.h>
#include <math.h>

int main(void) {
/* Declare variables */
   float a = 0.0;
   float pi = acos(-1);
   float b = pi/3;
   int N = 12;
   float h = (b-a)/N;
   float s = tan(a)+tan(b);
   float abs_diff;
   int i;
   
   float x;
   float rel_diff;
/* Create a loop that generates 11 equidistant points between 0 → π/3 */
   for (i=1; i<=N-1; i++) {
      x = a+i*h;
      s += 2*tan(x);
   }
   s = s*(b-a)/(2*N);
   printf("Area computed using the Trapezodial rule: %f\n",s);

   abs_diff = s-log(2);
   //printf("Difference between the computed area and log(2) is: %f\n",diff);
   
   rel_diff = fabs(1-(s/logf(2)));
   printf("abs_diff = %f\n rel_diff = %f\n", abs_diff, rel_diff);
   return 0;
}
