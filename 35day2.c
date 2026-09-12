//Q70: Rotate an array to the right by k positions.


#include <stdio.h>
int main ()
{
    int n, i, k;
    
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

    if (scanf("%d", &k) != 1 || k < 0) {
        printf("Invalid rotation count.\n");
        return 1;
    }

    
    k = k % n; 

    
    int temp[k];
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i]; 
    }

    
    for (i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k]; 
    }

    
    for (i = 0; i < k; i++) {
        arr[i] = temp[i]; 
    }

    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}