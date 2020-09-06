/*
 * Author:  Luke Hindman
 * Date: Sun 06 Sep 2020 09:42:55 AM PDT
 * Description: Exploration of reading formatted user input
 */
#include <stdio.h>

int main(void) {

   /* scanf() provides an incredibly powerful way to read data from user
    *   and convert it to a desired data type. However there are some aspects
    *   of how scanf() works that deserver a deeper look.
    */

   int seconds=0;

   /* Seconds is the name of a variable that represents a particular location in memory.
    *   We can use the '&' operator to access the address of its location in memory and
    *   the %p format directive to print it in the console */
   printf("The address of the seconds variable in memory is: %p\n", &seconds);

   /* When we use scanf() to read data from the user, it requires the address of the variable
    *   so that it knows where to store it in memory. scanf() will overwrite any existing 
    *   data that is stored at that location in memory. */
   // printf("Please enter the number of seconds: ");
   // scanf("%d", &seconds);

   /* When we display the value, printf() doesn't need the address, all it cares 
    *   about is the value stored in the variable */
   // printf("You entered %d seconds\n",seconds);

   // printf("\n\n\n");
   // int minutes=0;
   // printf("Please enter the number of minutes and seconds: (mm:ss)");
   // scanf("%d:%d", &minutes, &seconds);
   // printf("You entered %d minutes and %d seconds\n", minutes, seconds);

   /* When we use scanf() to read strings from the user, we must be particularly careful.  First
    *  we must allocate a character array large enough to handle the desired user input + 1 additional
    *  character for the NULL character '\0'. This is a great place to use a constant. */
   const int MAX_NAME_LENGTH = 10;
   char data[MAX_NAME_LENGTH + 1];

   /* When working with an array in C, if you specify only the array name WITHOUT the [], then
    *   it gives you the address of the beginning of the array in memory */
   // printf("\n\n\n");
   // printf("The data array begins at address: %p\n",data);
   // printf("The data array can hold up to %zu characters\n", sizeof (data));

   /* The trouble is that with strings, it is easy for a user to enter more than the desired number of characters */
   // printf("Please enter your name, but limit it to no more than 10 characters: ");
   // scanf("%s", data);

   /* To resolve this, we can update the format itself to only process the first 20 characters of user input. */
   // scanf("%10s", data);

   // printf("Wecome %s!\n", data);

   return 0;
}
