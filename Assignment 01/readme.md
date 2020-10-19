# [07. List All Character and Integer Data Types Maximum and Minimum value(i.e. Range) a variable can store (Use limits.h).](https://github.com/1915002517/cse213/blob/main/Assignment%2001/07.c)
```c
have to use limits.h after #include<stdio.h> library function
#include<stdio.h>
#include<limits.h>
int main()
{
return 0;
}

Macro Constants     	      Value	                        Description
  CHAR_BIT	                8	                     number of bits in a byte
  
  CHAR_MIN	              -128	                  minimum value for type char 
  CHAR_MAX	              +127	                  maximum value for type char
  
 SCHAR_MIN	              -128	                 minimum value for a signed char
 SCHAR_MAX	              +127	                 maximum value for a signed char
 
 UCHAR_MAX	               255	                maximum value for an unsigned char.


  INT_MIN	            -2147483648	                  minimum value for an int.
  INT_MAX	            +2147483647	                  maximum value for an int.
  
 SHRT_MIN	              -32768	                   minimum value for a short int.
 SHRT_MAX	              +32767	                   maximum value for a short int.
 
 USHRT_MAX	             65535	               maximum value for an unsigned short int.
 UINT_MAX	            4294967295	                maximum value for an unsigned int.
 
 LONG_MIN	            -9223372036854775808	            minimum value for a long int.
 LONG_MAX      	            +9223372036854775807	              maximum value for a long int.
 
 ULONG_MAX	          18446744073709551615	         maximum value for an unsigned long int.
```
