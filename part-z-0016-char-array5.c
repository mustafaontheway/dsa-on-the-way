#include <stdio.h>
#include <string.h>

int main() {

    char greet[] = "hi";

    char greet_copy[5] = {0};

    // strcpy(greet_copy, greet);

    // printf("%s\n", greet_copy); //hi

    strncpy(greet_copy, greet, 1);

    printf("%s\n", greet_copy); // h

    return 0;
}

