#include <stdio.h>
int main() {
    int x = 5, y = 10;
    if (x > 3) {
        if (y > 5)
            printf("x is greater than 3 and y is greater than 5\n");
        else
            printf("y is not greater than 5\n");
    } else {
        printf("x is not greater than 3\n");
    }
    return 0;
}
