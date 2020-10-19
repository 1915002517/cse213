/*
7. List All Character and Integer Data Types Maximum and Minimum value(i.e. Range)
   a variable can store (Use limits.h).
Name : Maksudujjaman
ID   : 1915002517
*/
#include<stdio.h>
#include<limits.h>
int main()
{

    printf("For Character Data Type : \n\n");

    printf("Number of bits in a byte : %d\n\n", CHAR_BIT);

    printf("Maximum Value of Char    : %d\n",CHAR_MAX);
    printf("Minimum Value of Char    : %d\n\n",CHAR_MIN);

    printf("Maximum Value of Signed Char    : %d\n",SCHAR_MAX);
    printf("Minimum Value of Signed Char    : %d\n\n",SCHAR_MIN);


    printf("Maximum Value of Unsigned Char    : %d\n\n",UCHAR_MAX);


    printf("\nFor Integer Data Type : \n\n");


    printf("Maximum Value of Int    : %d\n",INT_MAX);
    printf("Minimum Value of Int    : %d\n\n",INT_MIN);

    printf("Maximum Value of Short Int    : %hd\n",SHRT_MAX);
    printf("Minimum Value of Short Int    : %hd\n\n",SHRT_MIN);

    printf("Maximum Value of Long Int    : %ld\n",LONG_MAX);
    printf("Minimum Value of Long Int    : %ld\n\n",LONG_MIN);

    printf("Maximum Value of Long Long Int    : %lld\n",LLONG_MAX);
    printf("Minimum Value of Long Long Int    : %lld\n\n",LLONG_MIN);

    printf("Maximum Value of Unsigned Int    : %u\n\n",UINT_MAX);

    printf("Maximum Value of Unsigned Short Int    : %hu\n\n",USHRT_MAX);

    printf("Maximum Value of Unsigned Long Int    : %lu\n\n",ULONG_MAX);

    printf("Maximum Value of Unsigned Long Long Int    : %llu\n\n",ULLONG_MAX);

    return 0;
}
