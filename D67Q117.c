#include <stdio.h>
int main () {
    int m, n;
    printf("Enter the number of elements in the first sorted array: ");
    scanf("%d", &m);
    
    int arr1[m];
    printf("Enter the elements of the first sorted array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the number of elements in the second sorted array: ");
    scanf("%d", &n);
    
    int arr2[n];
    printf("Enter the elements of the second sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int merged[m + n];
    int i = 0, j = 0, k = 0;
    
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    
    while (i < m) {
        merged[k++] = arr1[i++];
    }
    
    while (j < n) {
        merged[k++] = arr2[j++];
    }
    
    printf("Merged sorted array: ");
    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}