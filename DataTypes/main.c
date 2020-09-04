/*
 * Author:  Luke Hindman
 * Date: Fri 04 Sep 2020 12:59:28 PM PDT
 * Description: Exploation of C data types
 */
#include <stdio.h>
#include <stdint.h>

int main(void) {

   /* Explore the sizes of the commonly used C data types */
   printf("Sizes of commonly used C data types\n");
   printf("%-15s%-15s\n","data type","size (bytes)");
   printf("%-15s%-15zu\n", "char", sizeof(char) );
   printf("%-15s%-15zu\n", "int", sizeof(int) );
   printf("%-15s%-15zu\n", "long", sizeof(long) );
   printf("%-15s%-15zu\n", "long long", sizeof(long long) );
   printf("%-15s%-15zu\n", "float", sizeof(float) );
   printf("%-15s%-15zu\n", "double", sizeof(double) );

   /* Explore the sizes of the commonly used C pointer data types */
   // printf("\n\nSizes of commonly used C pointer data types\n");
   // printf("%-15s%-15s\n","data type","size (bytes)");
   // printf("%-15s%-15zu\n", "char *", sizeof(char *) );
   // printf("%-15s%-15zu\n", "int *", sizeof(int *) );
   // printf("%-15s%-15zu\n", "float *", sizeof(float *) );
   // printf("%-15s%-15zu\n", "double *", sizeof(double *) );

   /* Explore the sizes of a few other data types */
   // printf("\n\nSizes of several additional C data types\n");
   // printf("%-15s%-15s\n","data type","size (bytes)");
   // printf("%-15s%-15zu\n", "size_t", sizeof(size_t) );
   // printf("%-15s%-15zu\n", "int8_t", sizeof(uint8_t) );
   // printf("%-15s%-15zu\n", "int16_t", sizeof(uint16_t) );
   // printf("%-15s%-15zu\n", "int32_t", sizeof(uint32_t) );
   // printf("%-15s%-15zu\n", "int64_t", sizeof(uint64_t) );

   return 0;
}
