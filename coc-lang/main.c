#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <assert.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdarg.h>
#include <inttypes.h>

#include "common.c"
#include "lex.c"
#include "ast.c"    
#include "print.c"

void run_tests() {
    common_test();
    lex_test();
    print_test();
}

int main(int argc, char **argv) {
    run_tests();
    return 0;
}
