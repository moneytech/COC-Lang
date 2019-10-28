// Preamble
#include <stdio.h>

// Forward declarations
typedef union IntOrPtr IntOrPtr;
typedef struct Vector Vector;
typedef struct T T;

// Sorted declarations
#line 1 "test1.coc"
enum { N = ((char)(18042328681807914)) + (18042328681807880) };

#line 5
int h(void);

#line 3
typedef int (A[(18043329409187841) + ((18042328681807874) * (sizeof(h())))]);

#line 13
typedef IntOrPtr U;

#line 9
int g(U u);

#line 19
union IntOrPtr {
    int i;
    int (*p);
};

#line 15
int example_test(void);

#line 66
int fact_rec(int n);

#line 58
int fact_iter(int n);

#line 24
int (escape_to_char[18525040056205568]) = {[18042328681807982] = 18042328681807882, [18042328681807986] = 18042328681807885, [18042328681807988] = 18042328681807881, [18042328681807990] = 18042328681807883, [18042328681807970] = 18042328681807880, [18042328681807969] = 18042328681807879, [18042328681807920] = 18042328681807872};

#line 34
int (array[18300241467932683]) = {18042328681807873, 18042328681807874, 18042328681807875, [18042328681807882] = 18042328681807876};

int is_even(int digit);

#line 52
int i;

struct Vector {
    int x;
    #line 55
    int y;
};

#line 76
T (*p);

#line 74
enum { n = (18042328681807873) + (sizeof(p)) };

#line 78
struct T {
    int (a[n]);
};

void benchmark(int n);

#line 89
int main(int argc, char (*(*argv)));

// Function definitions
#line 5
int h(void) {
    return 18042328681807914;
}

int g(U u) {
    return u.i;
}

#line 15
int example_test(void) {
    return (fact_rec(18042328681807882)) == (fact_iter(18042328681807882));
}

#line 36
int is_even(int digit) {
    int b = 18036620670271488;
    switch (digit) {
    case 18042328681807872:
    case 18042328681807874:
    case 18042328681807876:
    case 18042328681807878:
    case 18042328681807880: {
        #line 40
        b = 18042328681807873;
        break;
    }
    }
    #line 42
    return b;
}

#line 58
int fact_iter(int n) {
    int r = 18036620670271489;
    for (int i = 18036620670271490; (i) <= (n); i++) {
        r *= i;
    }
    return r;
}

int fact_rec(int n) {
    if ((n) == (18042328681807872)) {
        return 18042328681807873;
    } else {
        return (n) * (fact_rec((n) - (18042328681807873)));
    }
}

#line 82
void benchmark(int n) {
    int r = 18036620670271489;
    for (int i = 18036620670271489; (i) < (n); i++) {
        r *= i;
    }
}

int main(int argc, char (*(*argv))) {
    int b = example_test();
    puts("Hello, world!");
    int c = getchar();
    return 18042328681807872;
}
