/* 
 * Author: Luke Hindman
 * Date: Fri 04 Sep 2020 01:19:17 PM PDT
 * Description:  Explore data conversion and casting in C
 */
#include <stdio.h>

int main(void) {

   /* Just like in Java, C will perform widening conversions automatically */
   printf("Widening data conversions in C are automatic\n");
   char data = 64;
   printf("The char data value is: %c\n",data);
   int data2 = data;
   printf("The int data value is: %d\n",data2);
   long data3 = data2;
   printf("The long data value is: %ld\n",data3);
   long long data4 = data3;
   printf("The long long data value is: %lld\n", data4);

   /* Just like in Java, narrowing conversions must be forced using a cast. Use with caution */
   printf("\n\nNarrowing conversions in C require a cast\n");
   char orig = (char) data4 ;
   printf("The original character value was %c which has an decimal value of %d\n", orig, orig);

   double pi = 3.14159265358979323846;
   printf("The value of PI as a double is: %0.20f\n", pi);

   float pi2 = (float) pi;
   printf("The value of PI as a float is:  %0.20f\n", pi2);

   int pi3 = (int) pi2;
   printf("The value of PI as an int is:   %d\n", pi3);

   /* For more information about how floating point numbers are represented on 
    *  modern processors, please read IEEE standard 754-2019
    *  https://ieeexplore.ieee.org/document/8766229
    * Please see the folks in the Albertson Library to get access to this document.
    */

   return 0;
}
