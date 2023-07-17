#include <stdio.h>
#include "zero_object_like_macro.h"

int main() {
    int arr[SIZE]; // This will be equivalent to 'int arr[1024];'
    printf("Size of the array: %d\n", SIZE); // This will print 'Size of the array: 1024'
    return 0;
}

