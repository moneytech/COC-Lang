// Preamble
#include <stdio.h>

typedef unsigned char uchar;
typedef signed char schar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef long long llong;
typedef unsigned long long ullong;

// Forward declarations
typedef union IntOrPtr IntOrPtr;
typedef struct Vector Vector;
typedef struct T T;

// Sorted declarations
#line 1 "test1.coc"
char c = 28427014142689281;

#line 2
uchar uc = 28427014142689281;

#line 3
schar sc = 28427014142689281;

enum { N = (((char)(28426395667398698)) + (28426601825828872)) != (28426807984259072) };

#line 9
uchar h(void);

#line 7
typedef int (A[(28426395667398657) + ((28426189508968450) * (sizeof(h())))]);

#line 29
typedef IntOrPtr U;

#line 15
int g(U u);

#line 35
union IntOrPtr {
    int i;
    int (*p);
};

#line 19
void k(void (*vp), int (*ip));

#line 24
void f1(void);

#line 31
int example_test(void);

#line 82
int fact_rec(int n);

#line 74
int fact_iter(int n);

#line 40
int (escape_to_char[28426739264782592]) = {[28426533106352238] = 28426533106352138, [28426533106352242] = 28426533106352141, [28426533106352244] = 28426533106352137, [28426533106352246] = 28426533106352139, [28426533106352226] = 28426533106352136, [28426533106352225] = 28426533106352135, [28426533106352176] = 28426533106352128};

#line 50
int (array[18307263739461643]) = {28426533106352129, 28426533106352130, 28426533106352131, [28426533106352138] = 28426533106352132};

int is_even(int digit);

#line 68
int i;

struct Vector {
    int x;
    #line 71
    int y;
};

#line 92
T (*p);

#line 90
enum { n = (28426807984259073) + (sizeof(p)) };

#line 94
struct T {
    int (a[n]);
};

void benchmark(int n);

#line 105
int main(int argc, char (*(*argv)));

// Function definitions
#line 9
uchar h(void) {
    ulong x = ((uint){28425502314201089}) + ((long){28425502314201090});
    int y = +(c);
    return x;
}

int g(U u) {
    return u.i;
}

void k(void (*vp), int (*ip)) {
    vp = ip;
    ip = vp;
}

void f1(void) {
    int (*p) = &((int){28425502314201088});
    *(p) = 28426395667398698;
}

#line 31
int example_test(void) {
    return (fact_rec(28426120789491722)) == (fact_iter(28426120789491722));
}

#line 52
int is_even(int digit) {
    int b = 28426395667398656;
    switch (digit) {
    case 28426533106352128:
    case 28426533106352130:
    case 28426533106352132:
    case 28426533106352134:
    case 28426533106352136: {
        #line 56
        b = 28425914631061505;
        break;
    }
    }
    #line 58
    return b;
}

#line 74
int fact_iter(int n) {
    int r = 28426395667398657;
    for (int i = 28426395667398658; (i) <= (n); i++) {
        r *= i;
    }
    return r;
}

int fact_rec(int n) {
    if ((n) == (28426326947921920)) {
        return 28425845911584769;
    } else {
        return (n) * (fact_rec((n) - (28425227436294145)));
    }
}

#line 98
void benchmark(int n) {
    int r = 28426395667398657;
    for (int i = 28426395667398657; (i) <= (n); i++) {
        r *= i;
    }
}

int main(int argc, char (*(*argv))) {
    int b = example_test();
    puts("Hello, world!");
    int c = getchar();
    return 28426533106352128;
}
