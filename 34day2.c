//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main ()
{
    int n, i, pos;
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n]; 

    
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    if (scanf("%d", &pos) != 1 || pos < 0 || pos >= n) {
        printf("Invalid position.\n");
        return 1;
    }

    
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1]; 
    }
    
    n--; 

    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}