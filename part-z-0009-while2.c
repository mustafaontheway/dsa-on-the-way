#include <stdio.h>

int main() {

    int counter = 0;

    while (counter <= 10) {

        printf("Counter: %d\n", counter);

        counter += 2;

        if (counter == 2) {

            continue;
        }

        if (counter > 7) {

            break;
        }
    }

    printf("Loop ended! Final counter value: %d", counter);

    return 0;
}

// Counter: 0
// Counter: 2
// Counter: 4
// Counter: 6
// Loop ended! Final counter value: 8
