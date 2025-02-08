#include <stdio.h>

// Function to find the first peak element in the array
int findFirstPeak(int arr[], int n) {
    if (n == 1) return arr[0]; // If there's only one element, it's the peak

    for (int i = 0; i < n; i++) {
        if ((i == 0 && arr[i] > arr[i + 1]) || 
            (i == n - 1 && arr[i] > arr[i - 1]) || 
            (i > 0 && i < n - 1 && arr[i] > arr[i + 1] && arr[i] > arr[i - 1])) {
            return arr[i];
        }
    }
    return -1; // If no peak is found
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findFirstPeak(arr, n);
    if (peak != -1) {
        printf("%d\n", peak);
    } else {
        printf("No peak element found\n");
    }

    return 0;
}

