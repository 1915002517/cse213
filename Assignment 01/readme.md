# [07. List All Character and Integer Data Types Maximum and Minimum value(i.e. Range) a variable can store (Use limits.h).](https://github.com/1915002517/cse213/blob/main/Assignment%2001/07.c)
```c
have to use limits.h after #include<stdio.h> library function
#include<stdio.h>
#include<limits.h>
int main()
{
return 0;
}

Macro Constants             Value	                          Description
CHAR_BIT                      8	                     number of bits in a byte

CHAR_MIN                   -128	                       Minimum value for char 
CHAR_MAX	                 +127	                       Maximum value for char

SCHAR_MIN	                 -128	                   Minimum value for signed char
SCHAR_MAX	                 +127	                   Maximum value for signed char

UCHAR_MAX	                  255	                   Maximum value for unsigned char


INT_MIN	               -2147483648	                  Minimum value for int
INT_MAX	               +2147483647	                  Maximum value for int

SHRT_MIN	               -32768	                   Minimum value for short int
SHRT_MAX	               +32767	                   Maximum value for short int

USHRT_MAX	               65535	                 Maximum value for unsigned short int

UINT_MAX	              4294967295	               Maximum value for unsigned int

LONG_MIN	         -9223372036854775808	            Minimum value for long int
LONG_MAX	         +9223372036854775807	            Maximum value for long int

ULONG_MAX	         18446744073709551615	         Maximum value for unsigned long int
```
