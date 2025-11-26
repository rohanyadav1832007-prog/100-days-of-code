// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>
int main() {
    int arr[100], n, k;
    int maxSum = 0;

    // Read size of array
    scanf("%d", &n);

    // Read elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read value of k
    scanf("%d", &k);

    // Calculate maximum sum of subarrays of size k
    for (int i = 0; i <= n - k; i++) {
        int currentSum = 0;
        for (int j = 0; j < k; j++) {
            currentSum += arr[i + j];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    // Print the maximum sum
    printf("%d\n", maxSum);
    return 0;
}