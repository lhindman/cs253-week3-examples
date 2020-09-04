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
   // for (size_t i = 0; i < strlen(msg); i++) {
   //    printf("%02ld - %c\n",i, msg[i]);
   //    // printf("%d\n",msg[i]);
   // }

   /* You can think of the '\0' character as a sentinal value to alert your program that you've 
    *  reached the end of the string. In Java you will get a StringIndexOutOfBoundsException when 
    *  you walk off the end of your String.  In C, you can just keep going and going and going... */
   // printf("\n\n\n");
   // for (size_t i = 0; i < 20; i++) {
   //    printf("%02ld - %c\n",i, msg[i]);
   //    // printf("%d\n",msg[i]);
   // }

   /* When using sizeof(), it is important to know that it is implemented in the compiler and so it can
    *   only determine the size of items that are known at compile time. In this instance we have a
    *   staticly defined array of characters initialized by a string literal, so the compiler knows 
    *   the exact size of the array.
    * 
    * Notice the different in output here.  The strlen() function returns the number of characters in 
    *   the string, upto but not including '\0'.  However, the sizeof() operator returns the size of
    *   the array itself, including the '\0' character.
    */
   // printf("The strlen() of msg is: %ld\n", strlen(msg));
   // printf("The sizeof() of msg is: %ld\n", sizeof(msg));

   /* In Java, String Objects are immutable meaning that they cannot be changed. When you think you're changing 
    *   a String in Java, you're actually creating a new Object containing your desired changes.
    * In C, we can absolutely modify a string.  It is just a char array.
    */
   // printf("\n\nThe orig message is: %s\n",msg);
   // msg[6] = 'B';
   // msg[7] = 'e';
   // msg[8] = 't';
   // msg[9] = 't';
   // msg[10] = 'y';
   // printf("The personal message is: %s\n", msg);

   /* We can even make the length of the string shorter by inserting our own null character */
   // msg[6] = 'B';
   // msg[7] = 'o';
   // msg[8] = 'b';
   // msg[9] = '\0';
   // printf("\n\nThe shortened message is: %s\n", msg);

   // printf("The strlen() of msg is: %ld\n", strlen(msg));
   // printf("The sizeof() of msg is: %ld\n", sizeof(msg));

   /* When working with strings, there are a couple things one MUST be careful of.  The first is accidentally 
    *  overwriting the '\0' character that terminates the string. If that happens, it is no longer
    *  a string, it is just an array of characters and the string related functions will not function correctly.
    * If there happens to be zeros in the memory immediately following the end of the string, it will still 
    *  seam to work correctly.  If there isn't, your program will randomly crash for no disernable reason.
    */
   // msg[6] = 'B';
   // msg[7] = 'o';
   // msg[8] = 'b';
   // msg[9] = 'b';
   // msg[10] = 'i';
   // msg[11] = 'e';
   // msg[12] = '!'; /* The original '\0' char was in index position 12 */
   // printf("\n\nWhen a String is becomes an array of chars: %s\n", msg);

   /* The second thing to be careful of is writing off the end of the array. Let's say we want to 
    *  manually added a '\0' at the end of our array. What is the index of the last position of 
    *  an array of size 13? */
   //msg[13] = '\0';


   return 0;
}
