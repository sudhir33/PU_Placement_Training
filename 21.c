#include <stdio.h>
int main() {
    int i, j;
    for (i = 0, j = 10; i < j; i++, j -= 2) {
        printf("%d %d ", i, j);
    }
    return 0;
}
