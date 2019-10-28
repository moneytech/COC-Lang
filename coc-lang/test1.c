#include <stdio.h>

// Forward declarations
typedef union IntOrPtr IntOrPtr;
typedef struct Vector Vector;
typedef struct T T;

// Function declarations
#line 3 "test1.coc"
int example_test(void);
#line 12 "test1.coc"
int is_even(int digit);
#line 38 "test1.coc"
int fact_iter(int n);
#line 46 "test1.coc"
int fact_rec(int n);
#line 63 "test1.coc"
int main(int argc, char (*(*argv)));

// Definitions
#line 1 "test1.coc"
typedef IntOrPtr U;
#line 7 "test1.coc"
union IntOrPtr {
    int i;
    int (*p);
};
#line 3 "test1.coc"
int example_test(void) {
    return (fact_rec(10)) == (fact_iter(10));
}
#line 46 "test1.coc"
int fact_rec(int n) {
    if ((n) == (0)) {
        return 1;
    } else {
        #line 51 "test1.coc"
        return (n) * (fact_rec((n) - (1)));
    }
}
#line 38 "test1.coc"
int fact_iter(int n) {
    int r = 1;
    for (int i = 2; (i) <= (n); i++) {
        r *= i;
    }
    return r;
}
#line 12 "test1.coc"
int is_even(int digit) {
    int b = 0;
    switch (digit) {
    case 0:
    case 2:
    case 4:
    case 6:
    case 8: {
        b = 1;
        break;
    }
    }
    #line 22 "test1.coc"
    return b;
}
#line 32 "test1.coc"
int i;
#line 34 "test1.coc"
struct Vector {
    int x;
    #line 35 "test1.coc"
    int y;
};
#line 57 "test1.coc"
T (*p);
#line 55 "test1.coc"
enum { n = (1) + (sizeof(p)) };
#line 59 "test1.coc"
struct T {
    int (a[n]);
};
#line 63 "test1.coc"
int main(int argc, char (*(*argv))) {
    int b = example_test();
    puts("Hello, world!");
    return 0;
}