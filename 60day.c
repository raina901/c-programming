//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.


#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid k\n");
        return 0;
    }

    int dq[n];          
    int head = 0, tail = -1;

    for (int i = 0; i < n; i++) {

        if (head <= tail && dq[head] <= i - k) {
            head++;
        }


        while (head <= tail && arr[dq[tail]] <= arr[i]) {
            tail--;
        }

        dq[++tail] = i;

    
        if (i >= k - 1) {
            if (i > k - 1) {
                printf(" ");
            }
            printf("%d", arr[dq[head]]);
        }
    }
    printf("\n");

    return 0;
}