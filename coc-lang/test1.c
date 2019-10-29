// Preamble
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

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
typedef union IntOrPtr IntOrPtr;
typedef struct Vector Vector;
typedef struct T T;
typedef struct ConstVector ConstVector;

// Sorted declarations
#line 10 "test1.coc"
#define PI (3.140000f)

#line 11
#define PI2 ((PI) + (PI))

char c = 1;

#line 14
uchar uc = 1;

#line 15
schar sc = 1;

#define N ((((char)(42)) + (8)) != (0))

#line 21
uchar h(void);

#line 19
typedef int (A[(1) + ((2) * (sizeof((h)())))]);

#line 90
struct Vector {
    int x;
    #line 91
    int y;
};

#line 48
typedef IntOrPtr U;

#line 54
union IntOrPtr {
    int i;
    int (*p);
};

#line 31
int g(U u);

#line 35
void k(void (*vp), int (*ip));

#line 40
void f1(void);

#line 45
void f3(int (a[]));

#line 50
int example_test(void);

#line 106
int fact_rec(int n);

#line 98
int fact_iter(int n);

#line 59
char const ((escape_to_char[256])) = {['n'] = '\n', ['r'] = '\r', ['t'] = '\t', ['v'] = '\v', ['b'] = '\b', ['a'] = '\a', ['0'] = 0};

#line 69
int (a2[18340390822215691]) = {1, 2, 3, [10] = 4};

#line 72
int is_even(int digit);

#line 88
int i;

#line 94
void f2(Vector v);

#line 116
T (*p);

#line 114
#define M ((1) + (sizeof(p)))

#line 118
struct T {
    int (a[M]);
};

void benchmark(int n);

#line 129
int va_test(int x, ...);

#line 133
typedef int (*F)(int, ...);

void test_lits(void);

#line 150
void test_ops(void);

#line 180
#define IS_DEBUG (true)

void test_bool(void);

#line 189
int test_ctrl(void);

#line 199
int const (j);

#line 200
int const ((*q));

#line 201
Vector const (cv);

void f4(char const ((*x)));

#line 206
struct ConstVector {
    int const (x);
    #line 207
    int const (y);
};

void f5(void const ((*p)));

#line 213
void test_convert(void);

#line 221
void test_const(void);

#line 244
void test_init(void);

#line 253
int main(int argc, char const ((*(*argv))));

// Function definitions
#line 21
uchar h(void) {
    (Vector){.x = 1, .y = 2}.x = 42;
    Vector (*v) = &((Vector){1, 2});
    v->x = 42;
    int (*p) = &((int){0});
    ulong x = ((uint){1}) + ((long){2});
    int y = +(c);
    return (uchar)(x);
}

int g(U u) {
    return u.i;
}

void k(void (*vp), int (*ip)) {
    vp = ip;
    ip = vp;
}

void f1(void) {
    int (*p) = &((int){0});
    *(p) = 42;
}

void f3(int (a[])) {
}

#line 50
int example_test(void) {
    return ((fact_rec)(10)) == ((fact_iter)(10));
}

#line 72
int is_even(int digit) {
    int b = 0;
    switch (digit) {
    case 0:
    case 2:
    case 4:
    case 6:
    case 8: {
        #line 76
        b = 1;
        break;
    }
    }
    #line 78
    return b;
}

#line 94
void f2(Vector v) {
    v = (Vector){0};
}

int fact_iter(int n) {
    int r = 1;
    for (int i = 0; (i) <= (n); i++) {
        r *= i;
    }
    return r;
}

int fact_rec(int n) {
    if ((n) == (0)) {
        return 1;
    } else {
        return (n) * ((fact_rec)((n) - (1)));
    }
}

#line 122
void benchmark(int n) {
    int r = 1;
    for (int i = 1; (i) <= (n); i++) {
        r *= i;
    }
}

int va_test(int x, ...) {
    return 0;
}

#line 135
void test_lits(void) {
    float f = 3.140000f;
    double d = 3.140000;
    int i = 1;
    uint u = 0xffffffffu;
    long l = 1l;
    ulong ul = 1ul;
    llong ll = 0x100000000ll;
    ullong ull = 0xffffffffffffffffull;
    uint x1 = 0xffffffff;
    llong x2 = 4294967295;
    ullong x3 = 0xffffffffffffffff;
    int x4 = (0xaa) + (0x55);
}

void test_ops(void) {
    float pi = 3.140000f;
    float f = 0.000000f;
    f = +(pi);
    f = -(pi);
    int n = -(1);
    n = ~(n);
    f = ((f) * (pi)) + (n);
    f = (pi) / (pi);
    n = (3) % (2);
    n = (n) + ((uchar)(1));
    int (*p) = &(n);
    p = (p) + (1);
    n = (int)(((p) + (1)) - (p));
    n = (n) << (1);
    n = (n) >> (1);
    int b = ((p) + (1)) > (p);
    b = ((p) + (1)) >= (p);
    b = ((p) + (1)) < (p);
    b = ((p) + (1)) <= (p);
    b = ((p) + (1)) == (p);
    b = (1) > (2);
    b = (1.230000f) <= (pi);
    n = 0xff;
    b = (n) & (~(1));
    b = (n) & (1);
    b = ((n) & (~(1))) ^ (1);
    b = (p) && (pi);
}

#line 182
void test_bool(void) {
    bool b = false;
    b = true;
    int i = 0;
    i = IS_DEBUG;
}

int test_ctrl(void) {
    while (1) {
        while (1) {
            break;
        }
        return 42;
    }
    return 0;
}

#line 203
void f4(char const ((*x))) {
}

#line 210
void f5(void const ((*p))) {
}

void test_convert(void) {
    int const ((*a)) = 0;
    int (*b) = 0;
    a = b;
    int (*p) = 0;
    (f5)(p);
}

void test_const(void) {
    ConstVector cv2 = {1, 2};
    #line 224
    int i = 0;
    i = 1;
    #line 228
    int x = cv.x;
    #line 230
    char c = escape_to_char[0];
    #line 232
    (f4)(escape_to_char);
    char const ((*p)) = (char const (*))(0);
    p = (escape_to_char) + (1);
    char (*q) = (char *)(escape_to_char);
    c = q['n'];
    #line 238
    p = (char const (*))(1);
    #line 241
    i = (int)((ullong)(p));
}

void test_init(void) {
    int x = (int const )(0);
    int y;
    int z = 42;
    int (a[28426395667398659]) = {1, 2, 3};
}

#line 253
int main(int argc, char const ((*(*argv)))) {
    if ((argv) == (0)) {
        (printf)("argv is null\n");
    }
    (test_init)();
    (test_lits)();
    (test_const)();
    (test_bool)();
    (test_ops)();
    int b = (example_test)();
    (puts)("Hello, world!");
    int c = (getchar)();
    (printf)("You wrote \'%c\'\n", c);
    (va_test)(1);
    (va_test)(1, 2);
    argv = NULL;
    return 0;
}
