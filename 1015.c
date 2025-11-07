#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b || a > c) {
        printf("%d eh o maior\n", a);
    } else {
        printf("%d eh o maior\n", c);
    }
    return 0;
}
