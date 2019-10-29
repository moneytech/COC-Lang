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
typedef struct S1 S1;
typedef struct S2 S2;
typedef union IntOrPtr IntOrPtr;
typedef struct Vector Vector;
typedef struct T T;
typedef enum Color Color;
typedef struct ConstVector ConstVector;

// Sorted declarations
#line 161 "test1.coc"
enum Color {
    COLOR_NONE,
    COLOR_RED,
    COLOR_GREEN,
    COLOR_BLUE,
};

#line 10
#define PI (3.140000f)

#line 11
#define PI2 ((PI) + (PI))

char c = 1;

#line 14
uchar uc = 1;

#line 15
schar sc = 1;

#define N ((((char)(42)) + (8)) != (0))

#line 60
uchar h(void);

#line 19
typedef int (A[(1) + ((2) * (sizeof((h)())))]);

char (*code) = 
    "\n"
    "#include <stdio.h>\n"
    "\n"
    "int main(int argc, char **argv) {\n"
    "    printf(\"Hello, world!\\n\");\n"
    "    return 0;\n"
    "}\n";

struct S1 {
    int a;
    int const (b);
};

struct S2 {
    S1 s1;
};

void f10(int (a[3]));

#line 43
void test_arrays(void);

#line 48
void test_nonmodifiable(void);

#line 129
struct Vector {
    int x;
    #line 130
    int y;
};

#line 87
typedef IntOrPtr U;

#line 93
union IntOrPtr {
    int i;
    int (*p);
};

#line 70
int g(U u);

#line 74
void k(void (*vp), int (*ip));

#line 79
void f1(void);

#line 84
void f3(int (a[]));

#line 89
int example_test(void);

#line 145
int fact_rec(int n);

#line 137
int fact_iter(int n);

#line 98
char const ((escape_to_char[256])) = {['n'] = '\n', ['r'] = '\r', ['t'] = '\t', ['v'] = '\v', ['b'] = '\b', ['a'] = '\a', ['0'] = 0};

#line 108
int (a2[18324301874724875]) = {1, 2, 3, [10] = 4};

#line 111
int is_even(int digit);

#line 127
int i;

#line 133
void f2(Vector v);

#line 155
T (*p);

#line 153
#define M ((1) + (sizeof(p)))

#line 157
struct T {
    int (a[M]);
};

#line 168
void test_enum(void);

#line 177
void benchmark(int n);

#line 184
int va_test(int x, ...);

#line 188
typedef int (*F)(int, ...);

void test_lits(void);

#line 205
void test_ops(void);

#line 235
#define IS_DEBUG (true)

void test_bool(void);

#line 244
int test_ctrl(void);

#line 254
int const (j);

#line 255
int const ((*q));

#line 256
Vector const (cv);

void f4(char const ((*x)));

#line 261
struct ConstVector {
    int const (x);
    #line 262
    int const (y);
};

void f5(int const ((*p)));

#line 268
void test_convert(void);

#line 276
void test_const(void);

#line 299
void test_init(void);

#line 310
void test_cast(void);

#line 319
int main(int argc, char const ((*(*argv))));

// Function definitions
#line 39
void f10(int (a[3])) {
    a[1] = 42;
}

void test_arrays(void) {
    int (a[28426395667398659]) = {1, 2, 3};
    (f10)(a);
}

void test_nonmodifiable(void) {
    S1 s1;
    s1.a = 0;
    #line 53
    S2 s2;
    s2.s1.a = 0;
}

#line 60
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

#line 89
int example_test(void) {
    return ((fact_rec)(10)) == ((fact_iter)(10));
}

#line 111
int is_even(int digit) {
    int b = 0;
    switch (digit) {
    case 0:
    case 2:
    case 4:
    case 6:
    case 8: {
        #line 115
        b = 1;
        break;
    }
    }
    #line 117
    return b;
}

#line 133
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

#line 168
void test_enum(void) {
    Color a = COLOR_RED;
    Color b = COLOR_RED;
    int c = (a) + (b);
    int i = a;
    a = i;
    (printf)("%d %d %d %d\n", COLOR_NONE, COLOR_RED, COLOR_GREEN, COLOR_BLUE);
}

void benchmark(int n) {
    int r = 1;
    for (int i = 1; (i) <= (n); i++) {
        r *= i;
    }
}

int va_test(int x, ...) {
    return 0;
}

#line 190
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

#line 237
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

#line 258
void f4(char const ((*x))) {
}

#line 265
void f5(int const ((*p))) {
}

void test_convert(void) {
    int const ((*a)) = 0;
    int (*b) = 0;
    a = b;
    void (*p) = 0;
    (f5)(p);
}

void test_const(void) {
    ConstVector cv2 = {1, 2};
    #line 279
    int i = 0;
    i = 1;
    #line 283
    int x = cv.x;
    #line 285
    char c = escape_to_char[0];
    #line 287
    (f4)(escape_to_char);
    char const ((*p)) = (char const (*))(0);
    p = (escape_to_char) + (1);
    char (*q) = (char *)(escape_to_char);
    c = q['n'];
    #line 293
    p = (char const (*))(1);
    #line 296
    i = (int)((ullong)(p));
}

void test_init(void) {
    int x = (int const )(0);
    int y;
    y = 0;
    int z = 42;
    int (a[28426395667398659]) = {1, 2, 3};
    for (ullong i = 0; (i) < (10); i++) {
        (printf)("%llu\n", i);
    }
}

void test_cast(void) {
    int (*p) = 0;
    uint64 a = 0;
    #line 314
    a = (uint64)(p);
    #line 316
    p = (int *)(a);
}

int main(int argc, char const ((*(*argv)))) {
    if ((argv) == (0)) {
        (printf)("argv is null\n");
    }
    (test_enum)();
    (test_arrays)();
    (test_cast)();
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
