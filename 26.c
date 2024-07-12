#include <stdio.h>
void foo(int *x) {
    *x = *x + 1;
}
int main() {
    int a = 5;
    foo(&a);
    printf("%d\n", a);
    return 0;
}
