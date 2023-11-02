#include <stdio.h>

void bubblesort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int bin_size, n;
    printf("Enter the bin capacity: ");
    scanf("%d", &bin_size);
    printf("Enter the number of groups: ");
    scanf("%d", &n);
    int group[n];
    printf("Enter the number of people in each group: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &group[i]);
    }
    bubblesort(group, n);
    int bin = bin_size, count = 0;
    for (int i = 0; i < n; i++) {
        if (group[i] <= bin) {
            bin -= group[i];
            count++;
        } else {
            bin = bin_size;
        }
    }
    printf("Total bins needed: %d\n", count);
}
