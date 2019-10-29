// Foreign includes
#include <stdio.h>

// Preamble
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
typedef struct S1 S1;
typedef struct S2 S2;
typedef struct UartCtrl UartCtrl;
typedef union IntOrPtr IntOrPtr;
typedef struct Vector Vector;
typedef struct T T;
typedef struct ConstVector ConstVector;

// Sorted declarations
#line 187 "test1.coc"
typedef enum Color {
    COLOR_NONE,
    COLOR_RED,
    COLOR_GREEN,
    COLOR_BLUE,
    NUM_COLORS,
} Color;

#line 12
#define PI (3.140000f)

#line 13
#define PI2 ((PI) + (PI))

#define U8 ((uint8)(42))

char c = 1;

#line 18
uchar uc = 1;

#line 19
schar sc = 1;

#define N ((((char)(42)) + (8)) != (0))

#line 86
uchar h(void);

#line 23
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

#line 47
void test_arrays(void);

#line 52
void test_nonmodifiable(void);

#line 64
struct UartCtrl {
    bool tx_enable;
    #line 65
    bool rx_enable;
};

#define UART_CTRL_REG ((uint *)(0x12345678))

uint32 pack(UartCtrl ctrl);

#line 74
UartCtrl unpack(uint32 word);

#line 78
void test_uart(void);

#line 155
struct Vector {
    int x;
    #line 156
    int y;
};

#line 113
typedef IntOrPtr U;

#line 119
union IntOrPtr {
    int i;
    int (*p);
};

#line 96
int g(U u);

#line 100
void k(void (*vp), int (*ip));

#line 105
void f1(void);

#line 110
void f3(int (a[]));

#line 115
int example_test(void);

#line 171
int fact_rec(int n);

#line 163
int fact_iter(int n);

#line 124
char const ((escape_to_char[256])) = {['n'] = '\n', ['r'] = '\r', ['t'] = '\t', ['v'] = '\v', ['b'] = '\b', ['a'] = '\a', ['0'] = 0};

#line 134
int (a2[18329782252994571]) = {1, 2, 3, [10] = 4};

#line 137
int is_even(int digit);

#line 153
int i;

#line 159
void f2(Vector v);

#line 181
T (*p);

#line 179
#define M ((1) + (sizeof(p)))

#line 183
struct T {
    int (a[M]);
};

#line 195
char const ((*(color_names[NUM_COLORS]))) = {[COLOR_NONE] = "none", [COLOR_RED] = "red", [COLOR_GREEN] = "green", [COLOR_BLUE] = "blue"};

#line 202
void test_enum(void);

#line 211
void test_assign(void);

#line 232
void benchmark(int n);

#line 239
int va_test(int x, ...);

#line 243
typedef int (*F)(int, ...);

void test_lits(void);

#line 260
void test_ops(void);

#line 290
#define IS_DEBUG (true)

void test_bool(void);

#line 299
int test_ctrl(void);

#line 309
int const (j);

#line 310
int const ((*q));

#line 311
Vector const (cv);

void f4(char const ((*x)));

#line 316
struct ConstVector {
    int const (x);
    #line 317
    int const (y);
};

void f5(int const ((*p)));

#line 323
void test_convert(void);

#line 331
void test_const(void);

#line 354
void test_init(void);

#line 367
void test_sizeof(void);

#line 375
void test_cast(void);

#line 384
int main(int argc, char const ((*(*argv))));

// Function definitions
#line 43
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
    #line 57
    S2 s2;
    s2.s1.a = 0;
}

#line 70
uint32 pack(UartCtrl ctrl) {
    return ((ctrl.tx_enable) & (1u)) | (((ctrl.rx_enable) & (1u)) << (1));
}

UartCtrl unpack(uint32 word) {
    return (UartCtrl){.tx_enable = (word) & (0x1), .rx_enable = ((word) & (0x2)) >> (1)};
}

void test_uart(void) {
    bool tx_enable = (unpack)(*(UART_CTRL_REG)).tx_enable;
    *(UART_CTRL_REG) = (pack)((UartCtrl){.tx_enable = !(tx_enable), .rx_enable = false});
    UartCtrl ctrl = (unpack)(*(UART_CTRL_REG));
    ctrl.rx_enable = true;
    *(UART_CTRL_REG) = (pack)(ctrl);
}

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

#line 115
int example_test(void) {
    return ((fact_rec)(10)) == ((fact_iter)(10));
}

#line 137
int is_even(int digit) {
    int b = 0;
    switch (digit) {
    case 0:
    case 2:
    case 4:
    case 6:
    case 8: {
        #line 141
        b = 1;
        break;
    }
    }
    #line 143
    return b;
}

#line 159
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

#line 202
void test_enum(void) {
    Color a = COLOR_RED;
    Color b = COLOR_RED;
    int c = (a) + (b);
    int i = a;
    a = i;
    (printf)("%d %d %d %d\n", COLOR_NONE, COLOR_RED, COLOR_GREEN, COLOR_BLUE);
}

void test_assign(void) {
    int i = 0;
    float f = 3.140000f;
    int (*p) = &(i);
    i++;
    i--;
    p++;
    p--;
    p += 1;
    i /= 2;
    i *= 123;
    i %= 3;
    i <<= 1;
    i >>= 2;
    i &= 0xff;
    i |= 0xff00;
    i ^= 0xff0;
}

#line 232
void benchmark(int n) {
    int r = 1;
    for (int i = 1; (i) <= (n); i++) {
        r *= i;
    }
}

int va_test(int x, ...) {
    return 0;
}

#line 245
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

#line 292
void test_bool(void) {
    bool b = false;
    b = true;
    int i = 0;
    i = IS_DEBUG;
}

int test_ctrl(void) {
    switch (1) {
    case 0: {
        return 0;
        break;
    }
    default: {
        #line 304
        return 1;
        break;
    }
    }
}

#line 313
void f4(char const ((*x))) {
}

#line 320
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
    #line 334
    int i = 0;
    i = 1;
    #line 338
    int x = cv.x;
    #line 340
    char c = escape_to_char[0];
    #line 342
    (f4)(escape_to_char);
    char const ((*p)) = (char const (*))(0);
    p = (escape_to_char) + (1);
    char (*q) = (char *)(escape_to_char);
    c = q['n'];
    #line 348
    p = (char const (*))(1);
    #line 351
    i = (int)((ullong)(p));
}

void test_init(void) {
    int x = (int const )(0);
    int y;
    y = 0;
    int z = 42;
    int (a[28426395667398659]) = {1, 2, 3};
    #line 362
    for (ullong i = 0; (i) < (10); i++) {
        (printf)("%llu\n", i);
    }
}

void test_sizeof(void) {
    int i = 0;
    ullong n = sizeof(i);
    n = sizeof(int);
    n = sizeof(int);
    n = sizeof(int *);
}

void test_cast(void) {
    int (*p) = 0;
    uint64 a = 0;
    #line 379
    a = (uint64)(p);
    #line 381
    p = (int *)(a);
}

int main(int argc, char const ((*(*argv)))) {
    if ((argv) == (0)) {
        (printf)("argv is null\n");
    }
    (test_sizeof)();
    (test_assign)();
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
