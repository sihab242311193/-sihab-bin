#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    return second_largest;
}

int main() {
    int arr[] = {4, 1, 7, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findSecondLargest(arr, n);

    printf("Second largest element is: %d\n", result);

    return 0;
}
