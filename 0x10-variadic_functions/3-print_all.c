#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...) {
    int i = 0;
    va_list args;
    va_start(args, format);
    while (format[i] != '\0') {
        switch (format[i]) {
            case 'c':
                printf(" %c ", va_arg(args, int));
                break;
            case 'i':
                printf(" %d ", va_arg(args, int));
                break;
            case 'f':
                printf(" %f ", va_arg(args, double));
                break;
            case 's':
                if (va_arg(args, char *) == NULL) {
                    printf(" (nil) ");
                } else {
                    printf(" %s ", va_arg(args, char *));
                }
                break;
            default:
                break;
        }
        i++;
    }
    va_end(args);
    printf("\n");
}
