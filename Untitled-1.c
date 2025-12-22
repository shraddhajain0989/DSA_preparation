#include <stdio.h>
int main() {
    int n;
    printf("enter the size of array: ");\
    scanf("%d",&n);

    int a[n];
    printf("enter the elements of array:\n");
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);4}

            //subarray sum
            for(int i=0;i<4;i++){
                int sum=0;
            for(int j=1;j<4;j++){
            sum= sum +a[j];
            printf("%d",sum);
        }
    }
}