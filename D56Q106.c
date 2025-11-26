// Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.


/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
3, 4, 4, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
8, -1, 1, 3, -1

Input 3:
arr = [1, 2, 3, 5]
Output 3:
2, 3, 5, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, -1, -1, -1

*/
#include <stdio.h>
int main() {
    int arr[100], n;
    int nextGreater[100];

    // Read size of array
    scanf("%d", &n);

    // Read elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find next greater element for each element
    for (int i = 0; i < n; i++) {
        nextGreater[i] = -1; // Default to -1
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater[i] = arr[j];
                break; // Found the next greater element
            }
        }
    }

    // Print the next greater elements in comma separated format
    for (int i = 0; i < n; i++) {
        printf("%d", nextGreater[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}