#include <stdio.h>


int main(void) {
/* Declare variables */
   int i;
   float sum1, sum2, diff;
   

/* First sum */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
      /*  Insert here */
	sum1 = sum1 + 1.0/(float)i;
   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
      /* Insert the same line as above except use sum2 */
	sum2 = sum2 + 1.0/(float)i;
   }

   printf(" Sum1=%.8f\n",sum1);
   printf(" Sum2=%.8f\n",sum2);

/* Find the difference */
   diff = sum1 - sum2;

   printf(" Difference between the two is %f\n",diff);

}
