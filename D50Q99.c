// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
int main() {
    char date[20];
    char day[3], month[3], year[5];

    // Read input date
    fgets(date, sizeof(date), stdin);

    // Extract day, month, and year
    sscanf(date, "%2s/%2s/%4s", day, month, year);

    // Check if month is "04" and change format
    if (strcmp(month, "04") == 0) {
        printf("%s-Apr-%s\n", day, year);
    } else {
        // If month is not "04", print the date as is
        printf("%s/%s/%s\n", day, month, year);
    }

    return 0;
}