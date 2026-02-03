#include <stdio.h>

int main() {

    int year = 2010;

    int *pointer_year;

    // &varA -> address of varA

    pointer_year = &year;

    printf("%p\n", pointer_year);
    printf("%p\n", &year);

    // 000000EA069FFD7C
    // 000000EA069FFD7C

    return 0;
}

