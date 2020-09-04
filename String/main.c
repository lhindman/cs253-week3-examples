/*
 * Author: Luke Hindman
 * Date: Fri 04 Sep 2020 02:17:33 PM PDT
 * Description: Explore Strings and string functions in C
 */ 
#include <stdio.h>
#include <string.h>

int main(void) {

   /* Strings in Java are defined as a Class with attributes and methods. 
    *   In C a String is simply a char array containing the desired individual characters
    *   and is terminated with a null character '\0'. 
    */
   char msg[] = "Hello World!";

   /* The strlen() function counts all the individual characters up to, but not including the '\0' 
    *   also noticed that the data type of i needed to be size_t to match the return type of strlen,
    *   otherwise it will generate a compiler warning. */
   for (size_t i = 0; i < strlen(msg); i++) {
      printf("%02ld - %c\n",i, msg[i]);
      // printf("%d\n",msg[i]);
   }

   /* You can think of the '\0' character as a sentinal value to alert your program that you've 
    *  reached the end of the string. In Java you will get a StringIndexOutOfBoundsException when 
    *  you walk off the end of your String.  In C, you can just keep going and going and going... */
   printf("\n\n\n");
   for (size_t i = 0; i < 20; i++) {
      printf("%02ld - %c\n",i, msg[i]);
      // printf("%d\n",msg[i]);
   }

   /* When using sizeof(), it is important to know that it is implemented in the compiler and so it can
    *   only determine the size of items that are known at compile time. In this instance we have a
    *   staticly defined array of characters initialized by a string literal, so the compiler knows 
    *   the exact size of the array.
    * 
    * Notice the different in output here.  The strlen() function returns the number of characters in 
    *   the string, upto but not including '\0'.  However, the sizeof() operator returns the size of
    *   the array itself, including the '\0' character.
    */
   printf("The strlen() of msg is: %ld\n", strlen(msg));
   printf("The sizeof() of msg is: %ld\n", sizeof(msg));

   return 0;
}
