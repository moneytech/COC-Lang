// Forward declarations
typedef union IntOrPtr IntOrPtr;
void f(void);
int example_test(void);
typedef struct Vector Vector;
int fact_rec(int n);
int fact_iter(int n);
typedef struct T T;

// Ordered declarations
T (*p);
enum { n = (1) + (sizeof(p)) };
union IntOrPtr {
    int i;
    int (*p);
};
void f(void) {
    IntOrPtr u1 = (IntOrPtr){.i = 42};
    IntOrPtr u2 = (IntOrPtr){.p = (int *)(42)};
    u1.i = 0;
    u2.p = (int *)(0);
}
int i;
int example_test(void) {
    return (fact_rec(10)) == (fact_iter(10));
}
int fact_rec(int n) {
    if ((n) == (0)) {
        return 1;
    } else {
        return (n) * (fact_rec((n) - (1)));
    }
}
int fact_iter(int n) {
    int r = 1;
    for (int i = 2; (i) <= (n); i++) {
        r *= i;
    }
    return r;
}
struct Vector {
    int x;
    int y;
};
struct T {
    int (a[n]);
};