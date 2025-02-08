#include <stdio.h>

// Function to reverse a part of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by K steps
void rotateArray(int arr[], int n, int k) {
    k = k % n;  // Handle cases where K > N

    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);

    // Step 2: Reverse the first K elements
    reverse(arr, 0, k - 1);

    // Step 3: Reverse the remaining N-K elements
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    rotateArray(arr, n, k);

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
