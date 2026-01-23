#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], result[n], stack[n];
    int top = -1;

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        result[i] = -1;  // default value
    }

    for(int i = 0; i < n; i++) {
        while(top != -1 && arr[i] > arr[stack[top]]) {
            result[stack[top]] = arr[i];
            top--;
        }
        stack[++top] = i;
    }

    printf("
