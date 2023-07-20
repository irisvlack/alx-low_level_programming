#include "variadic_functions.h"
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...) {
    va_list args;
    va_start(args, n);
    for (unsigned int i = 0; i < n; i++) {
        if (i != 0 && separator != NULL) {
            printf(" %s ", separator);
        }
        if (va_arg(args, char *) == NULL) {
            printf(" (nil) ");
        } else {
            printf(" %s ", va_arg(args, char *));
        }
    }
    va_end(args);
    printf("\n");
}
