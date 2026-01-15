#include <stdio.h>

int main() {
    int n, count = 0;

    scanf("%d", &n);

    // Special case for 0
    if (n == 0) {
        printf("1");
        return 0;
    }

    while (n != 0) {
        count++;
        n = n / 10;
    }

    printf("%d", count);

    return 0;
}
