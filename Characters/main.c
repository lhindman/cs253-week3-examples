/* 
 * Author: Luke Hindman
 * Date: Fri 04 Sep 2020 02:16:47 PM PDT
 * Description: Explore the details of characters in C
 */
#include <stdio.h>

int main(void) {

   /* In Java the char primitive is 2 bytes or 16 bits.  This allow a single
    *  char to be any one of 2^16 or 65536 possible values. This is what allows
    *  Java to support the Unicode character set.
    * 
    * In Contrast, the char in C is on 1 byte or 8 bits.  This limits a single
    *  char to only 2^8 or 256 possible values. For that reason, C does not natively
    *  support the Unicode character set. Instead it supports the extended 
    *  ASCII character set. https://www.ascii-code.com/
    */

   /* In C, a character and its decimal equivalent can be used interchangably */
   char data = '@';
   // char data = 64;

   /* When we want to display the contents of a character variable, the format
    *  specifier determine what is printed to the console */
   printf("The character is: %c\n", data);
   printf("The decimal value of the character is: %d\n",data);


   /* And just like in Java, we can use char data for comparisons and arithmetic */
   char newData = data + 1;
   printf("The new character is: %c\n", newData);

   /* A particularly useful character is called the null character.  It is ASCII character code 0.
    *  The null character is particularly useful in strings because it is used to identify the 
    *  end of a string. */
   char nullData = '\0';
   // char nullData = 0;
   printf("This is the null character: %c\n",nullData);
   printf("This is the decimal value of null: %d\n",nullData);


   return 0;
}
