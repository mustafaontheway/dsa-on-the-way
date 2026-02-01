#include <stdio.h>
#include <stdbool.h>

int main() {

    bool x = true;
    bool y = false;
    
    printf("%d ", x);
    printf("%d ", y);

    printf("%d ", x && y);
    printf("%d ", x || y);

    return 0;
}

// 1 0 0 1 
