#include <stdio.h>
int main () {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
    
    int arr[n - 1];
    printf("Enter the elements of the array (all integers between 0 to %d except one): ", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    
    int total_sum = n * (n - 1) / 2; 
    int arr_sum = 0;
    
    for (int i = 0; i < n - 1; i++) {
        arr_sum += arr[i];
    }
    
    int missing_number = total_sum - arr_sum;
    printf("The missing number is: %d\n", missing_number);
    
    return 0;
}