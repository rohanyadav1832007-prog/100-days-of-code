
#include <stdio.h>
int main () {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the size of the subarray (k): ");
    scanf("%d", &k);
    
    printf("First negative integers in each subarray of size %d: ", k);
    for (int i = 0; i <= n - k; i++) {
        int first_negative = 0; 
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                first_negative = arr[i + j];
                break;
            }
        }
        printf("%d ", first_negative);
    }
    printf("\n");
    
    return 0;
}