// Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>
int main() {
    int n;
    int totalSum = 0;
    int leftSum = 0;

    // Read input integer n
    scanf("%d", &n);

    // Calculate total sum from 1 to n
    for (int i = 1; i <= n; i++) {
        totalSum += i;
    }

    // Find pivot integer
    for (int x = 1; x <= n; x++) {
        leftSum += x; // Sum from 1 to x
        int rightSum = totalSum - leftSum + x; // Sum from x to n

        if (leftSum == rightSum) {
            printf("%d\n", x); // Pivot integer found
            return 0;
        }
    }

    // If no pivot integer found
    printf("-1\n");
    return 0;
}