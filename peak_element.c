Find the peak element in an array (greater than or equal to its neighbors).

WTD: Scrutinize the array to find an element that is both larger than its predecessor and its successor.

(e.g.: I/P: [1, 3, 20, 4, 1, 0], O/P: 20 )







#include <stdio.h>

int main() {
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    // Input
    for(int i = 0; i < n; i++) {
        printf("Enter array value at %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Print array
    printf("Array elements are:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Assume first element is max and min
    int max = 0;
    int min = arr[0];

    // Find max and min
    for(int i = 0; i < n; i++) {

        if((arr[i] > arr[i+1]) & (arr[i]>arr[i-1]) ){
            max = arr[i];
        }

       
    }

    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);

    return 0;
}
