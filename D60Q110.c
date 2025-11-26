// Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>
int main() {
    int arr[100], n, k;

    // Read size of array
    scanf("%d", &n);

    // Read elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read value of k
    scanf("%d", &k);

    // Find maximum in each subarray of size k
    for (int i = 0; i <= n - k; i++) {
        int maxElement = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > maxElement) {
                maxElement = arr[i + j];
            }
        }
        printf("%d", maxElement);
        if (i != n - k) {
            printf(" "); // Print space between maximums
        }
    }
    printf("\n");

    return 0;
}