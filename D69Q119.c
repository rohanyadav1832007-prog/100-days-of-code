#include <stdio.h>
int main () {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array (only one element is repeated): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int seen[100000] = {0}; // Assuming the input numbers are in the range 0 to 99999
    int repeated_element = -1;
    
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]] == 1) {
            repeated_element = arr[i];
            break;
        } else {
            seen[arr[i]] = 1;
        }
    }
    
    if (repeated_element != -1) {
        printf("The repeated element is: %d\n", repeated_element);
    } else {
        printf("No repeated element found.\n");
    }
    
    return 0;
}