#include <stdio.h>

int Largest(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int largest = Largest(arr, n - 1);
    return (arr[n - 1] > largest) ? arr[n - 1] : largest;
}

int main() {
    int arr[100], n, large;

    printf("Enter the number of elements you want to add: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    large = Largest(arr, n);

    printf("The largest element in the array is: %d\n", large);

    return 0; 
}
