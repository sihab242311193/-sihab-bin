#include <stdio.h>

int main() {
    int arr[] = {10, 3, 5, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int evenCount = 0, oddCount = 0;


    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Even numbers count: %d\n", evenCount);
    printf("Odd numbers count: %d\n", oddCount);

    return 0;
}
