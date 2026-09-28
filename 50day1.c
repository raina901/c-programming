//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include<stdio.h>
int main() {
    int day, month, year;
    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("Date in dd-Apr-yyyy format: %d-", day);
    switch(month) {
        case 1: printf("Jan-%d", year); break;
        case 2: printf("Feb-%d", year); break;
        case 3: printf("Mar-%d", year); break;
        case 4: printf("Apr-%d", year); break;
        case 5: printf("May-%d", year); break;
        case 6: printf("Jun-%d", year); break;
        case 7: printf("Jul-%d", year); break;
        case 8: printf("Aug-%d", year); break;
        case 9: printf("Sep-%d", year); break;
        case 10: printf("Oct-%d", year); break;
        case 11: printf("Nov-%d", year); break;
        case 12: printf("Dec-%d", year); break;
    }
    return 0;
}