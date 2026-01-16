#include <stdio.h>

int main() {
    int arr[] = {3, 7, 2, 9, 1};
    int n = 5;
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%d", max);
    return 0;
}
