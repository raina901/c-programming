//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main() {
    int m, n;

    scanf("%d", &m);
    int nums1[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    scanf("%d", &n);
    int nums2[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int result[m + n];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            result[k] = nums1[i];
            i++;
        } else {
            result[k] = nums2[j];
            j++;
        }
        k++;
    }
    while (i < m) {
        result[k] = nums1[i];
        i++;
        k++;
    }

    
    while (j < n) {
        result[k] = nums2[j];
        j++;
        k++;
    }

    for (int x = 0; x < m + n; x++) {
        printf("%d ", result[x]);
    }
    return 0;
}