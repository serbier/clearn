# include <stdio.h>
# include <limits.h>
# include <float.h>

/* Program to show the ranges of char, short, int and long both signed and unsigned */

int main ()
{
    printf("Type\tAttr\tValue\n");
    // char type
    printf("char\tdefault\t%d - %d\n", CHAR_MIN, CHAR_MAX);
    printf("char\tunsigned\t%d - %d\n", 0, UCHAR_MAX);
    printf("char\tsigned\t%d - %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("int\tdefault\t%d - %d\n", INT_MIN, INT_MAX);
    printf("int\tunsigned\t%d - %d\n", 0, UINT_MAX);
    printf("short\tunsigned\t%d - %d\n", 0, USHRT_MAX);
    printf("short\tsigned\t%d - %d\n", SHRT_MIN, SHRT_MAX);
    printf("long\tunsigned\t%d - %lu\n", 0, ULONG_MAX);
    printf("long\tsigned\t%ld - %ld\n", LONG_MIN, LONG_MAX);

}
