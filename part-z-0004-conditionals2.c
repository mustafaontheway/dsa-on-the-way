#include <stdio.h>
#include <math.h>

int main() {

    int val;

    printf("Type a integer: ");

    scanf("%d", &val);

    if (val % 2 == 0 && val > 0) {

        printf("%d is even and positive.", val);

    } else if (val % 2 != 0 && val > 0) {

        printf("%d is odd and positive.", val);

    } else {

        printf("I won't check. Gemini will check...");
    }

    return 0;

}
