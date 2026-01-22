#include <stdio.h>

#include <stdbool.h> // bool!

int main() {

    int x = 21;

    int y = -14;

    int z = 16;

    // 1 -> True, 0 -> False

    bool result1 = x > y && z != x;

    printf("Result 1: %d\n", result1);

    bool result2 = x == y || z <= y;

    printf("Result 2: %d", result2);

}

// Result 1: 1
// Result 2: 0
