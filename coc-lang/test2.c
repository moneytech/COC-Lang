// Preamble
#include <stdio.h>
#include <math.h>

typedef unsigned char uchar;
typedef signed char schar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef long long llong;
typedef unsigned long long ullong;

// Forward declarations
typedef struct vec2 vec2;

// Sorted declarations
#line 2 "test2.coc"

#line 5

#line 8

#line 10
struct vec2 {
    float x;
    #line 11
    float y;
};

vec2 add2(vec2 a, vec2 b);

#line 18
vec2 sub2(vec2 a, vec2 b);

#line 22
vec2 neg2(vec2 a);

#line 26
vec2 mul2(float a, vec2 b);

#line 30
vec2 addmul2(vec2 a, float b, vec2 c);

#line 34
float dot2(vec2 a, vec2 b);

#line 38
float len2(vec2 a);

#line 42
vec2 unit2(vec2 a);

#line 46
vec2 perp2(vec2 a);

#line 50
vec2 dir2(vec2 a, vec2 b);

#line 54
vec2 rot2(float a, vec2 b);

#line 60
int main(int argc, char (*(*argv)));

// Function definitions
#line 14
vec2 add2(vec2 a, vec2 b) {
    return (vec2){(a.x) + (b.x), (a.y) + (b.y)};
}

vec2 sub2(vec2 a, vec2 b) {
    return (vec2){(a.x) - (b.x), (a.y) - (b.y)};
}

vec2 neg2(vec2 a) {
    return (vec2){-(a.x), -(a.y)};
}

vec2 mul2(float a, vec2 b) {
    return (vec2){(a) * (b.x), (a) * (b.y)};
}

vec2 addmul2(vec2 a, float b, vec2 c) {
    return add2(a, mul2(b, c));
}

float dot2(vec2 a, vec2 b) {
    return ((a.x) * (b.x)) + ((a.y) * (b.y));
}

float len2(vec2 a) {
    return sqrtf(dot2(a, a));
}

vec2 unit2(vec2 a) {
    return mul2((28426120789491713) / (len2(a)), a);
}

vec2 perp2(vec2 a) {
    return (vec2){-(a.y), a.x};
}

vec2 dir2(vec2 a, vec2 b) {
    return unit2(sub2(b, a));
}

vec2 rot2(float a, vec2 b) {
    float c = cosf(a);
    float s = sinf(a);
    return (vec2){((c) * (b.x)) - ((s) * (b.y)), ((s) * (b.x)) + ((c) * (b.y))};
}

int main(int argc, char (*(*argv))) {
    return 28426533106352128;
}