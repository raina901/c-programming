//Q66: Insert an element in a sorted array at the appropriate position.


#include <stdio.h>
int main() {
    int n, i, j, newElement;
    
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n + 1]; 

    
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    if (scanf("%d", &newElement) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    
    for (i = n - 1; (i >= 0 && arr[i] > newElement); i--) {
        arr[i + 1] = arr[i]; 
    }
    
    arr[i + 1] = newElement; 

    
    for (j = 0; j <= n; j++) {
        printf("%d ", arr[j]);
    }
    
    return 0;
}