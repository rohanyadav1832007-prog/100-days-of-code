// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include <stdio.h>
int main() {
    int nums[100], n, target;
    int first = -1, last = -1;

    // Read size of array
    scanf("%d", &n);

    // Read elements of the sorted array
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Read target value
    scanf("%d", &target);

    // Find first and last occurrence of target
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i; // First occurrence
            }
            last = i; // Update last occurrence
        }
    }

    // Print result
    printf("%d,%d\n", first, last);
    return 0;
}