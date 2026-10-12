//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

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

    int q[n];        
    int head = 0, tail = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            q[++tail] = i;
        }

        if (head <= tail && q[head] <= i - k) {
            head++;
        }
        if (i >= k - 1) {
            if (i > k - 1) {
                printf(" ");
            }
            if (head <= tail) {
                printf("%d", arr[q[head]]);
            } else {
                printf("0");
            }
        }
    }
    printf("\n");

    return 0;
}