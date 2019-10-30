// Foreign includes

// Preamble
#include <stdio.h>
#include <stdbool.h>

typedef unsigned char uchar;
typedef signed char schar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef long long llong;
typedef unsigned long long ullong;

typedef uchar uint8;
typedef schar int8;
typedef ushort uint16;
typedef short int16;
typedef uint uint32;
typedef int int32;
typedef ullong uint64;
typedef llong int64;

// Forward declarations

// Sorted declarations
#line 3 "example.coc"
int scanf(char const ((*fmt)), ...);

int kadane(int (array[]), int size);

#line 18
int main(int argc, char const ((*(*argv))));

// Definitions
#line 5
int kadane(int (array[]), int size) {
    int current_max = array[0];
    int maximum = array[0];
    #line 11
    for (int i = 0; (i) < (size); i++) {
        current_max = ((array[i]) < ((array[i]) + (current_max)) ? (array[i]) + (current_max) : array[i]);
        maximum = ((maximum) < (current_max) ? current_max : maximum);
    }
    return maximum;
}

int main(int argc, char const ((*(*argv)))) {
    #line 21
    int (arr[8]) = {-(2), -(3), 4, -(1), -(2), 1, 5, -(3)};
    ullong n = (sizeof(arr)) / (sizeof(arr[0]));
    int max_sum = (kadane)(arr, n);
    (printf)("Maximum sum of subarray is: %d\n", max_sum);
    return 0;
}
