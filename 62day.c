//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int cur = arr[0]; 
    int max = arr[0];   

    for (int i = 1; i < n; i++) {
    
        if (cur + arr[i] > arr[i]) {
            cur = cur + arr[i];
        } else {
            cur = arr[i];
        }

        
        if (cur > max) {
            max = cur;
        }
    }

    printf("%d", max);
    return 0;
}