#include <stdio.h>
int main() {
    char str[] = "Hello";
    printf("%c\n", str[strlen(str) - 1]);
    return 0;
}
