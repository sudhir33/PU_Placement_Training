#include <stdio.h>
int main() {
    int i;
    for (i = 0; i < 3; i++) {
        printf("%d ", i);
        if (i == 1)
            continue;
        printf("* ");
    }
    return 0;
}
