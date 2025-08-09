
#include <stdio.h>

int main() {
    int arr[] = {4, 7, 1, 3};
    int key = 3;
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    printf("%d\n", index);
    return 0;
}
