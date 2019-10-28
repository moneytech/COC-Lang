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
#line 2 "test1.coc"

#line 5

#line 8

#line 10
char c = 28427014142689281;

#line 11
uchar uc = 28427014142689281;

#line 12
schar sc = 28427014142689281;

enum { N = (((char)(28426395667398698)) + (28426601825828872)) != (28426807984259072) };

#line 18
uchar h(void);

#line 16
typedef int (A[(28426395667398657) + ((28426189508968450) * (sizeof(h())))]);

#line 81
struct Vector {
    int x;
    #line 82
    int y;
};

#line 40
typedef IntOrPtr U;

#line 26
int g(U u);

#line 46
union IntOrPtr {
    int i;
    int (*p);
};

#line 30
void k(void (*vp), int (*ip));

#line 35
void f1(void);

#line 42
int example_test(void);

#line 97
int fact_rec(int n);

#line 89
int fact_iter(int n);

#line 51
int (escape_to_char[28426739264782592]) = {[28426533106352238] = 28426533106352138, [28426533106352242] = 28426533106352141, [28426533106352244] = 28426533106352137, [28426533106352246] = 28426533106352139, [28426533106352226] = 28426533106352136, [28426533106352225] = 28426533106352135, [28426533106352176] = 28426533106352128};

#line 61
int (array[18323464356102155]) = {28426533106352129, 28426533106352130, 28426533106352131, [28426533106352138] = 28426533106352132};

int is_even(int digit);

#line 79
int i;

#line 85
void f2(Vector v);

#line 107
T (*p);

#line 105
enum { n = (28426807984259073) + (sizeof(p)) };

#line 109
struct T {
    int (a[n]);
};

void benchmark(int n);

#line 120
int va_test(int x, ...);

#line 124
typedef int (*F)(int, ...);

void test_ops(void);

#line 156
int main(int argc, char (*(*argv)));

// Function definitions
#line 18
uchar h(void) {
    (Vector){.x = 28425639753154561, .y = 28425639753154562}.x = 28426395667398698;
    int (*p) = &((int){28425502314201088});
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

#line 42
int example_test(void) {
    return (fact_rec(28426120789491722)) == (fact_iter(28426120789491722));
}

#line 63
int is_even(int digit) {
    int b = 28426395667398656;
    switch (digit) {
    case 28426533106352128:
    case 28426533106352130:
    case 28426533106352132:
    case 28426533106352134:
    case 28426533106352136: {
        #line 67
        b = 28425914631061505;
        break;
    }
    }
    #line 69
    return b;
}

#line 85
void f2(Vector v) {
    v = (Vector){0};
}

int fact_iter(int n) {
    int r = 28426395667398657;
    for (int i = 28426395667398656; (i) <= (n); i++) {
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

#line 113
void benchmark(int n) {
    int r = 28426395667398657;
    for (int i = 28426395667398657; (i) <= (n); i++) {
        r *= i;
    }
}

int va_test(int x, ...) {
    return 28426533106352128;
}

#line 126
void test_ops(void) {
    float pi = 3.140000;
    float f = 0.000000;
    f = +(pi);
    f = -(pi);
    int n = -(28426052070014977);
    n = ~(n);
    f = (f) * (pi);
    f = (pi) / (pi);
    n = (28426189508968451) % (28426189508968450);
    n = (n) + ((uchar)(28425983350538241));
    int (*p) = &(n);
    p = (p) + (28426189508968449);
    n = ((p) + (28425983350538241)) - (p);
    n = (n) << (28426189508968449);
    n = (n) >> (28426189508968449);
    int b = ((p) + (28425845911584769)) > (p);
    b = ((p) + (28425983350538241)) >= (p);
    b = ((p) + (28425983350538241)) < (p);
    b = ((p) + (28425983350538241)) <= (p);
    b = ((p) + (28425983350538241)) == (p);
    b = (28426189508968449) > (28426189508968450);
    b = (1.230000) <= (pi);
    n = 28426395667398911;
    b = (n) & (~(28425983350538241));
    b = (n) & (28426189508968449);
    b = ((n) & (~(28425777192108033))) ^ (28426189508968449);
    b = (p) && (pi);
}

int main(int argc, char (*(*argv))) {
    test_ops();
    int b = example_test();
    puts("Hello, world!");
    int c = getchar();
    printf("You wrote \'%c\'\n", c);
    va_test(28426189508968449);
    va_test(28426189508968449, 28426189508968450);
    return 28426533106352128;
}
