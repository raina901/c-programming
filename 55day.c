/*Q105: Write a program to take an integer array nums of size n, and print the majority element.
 The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1
  if no such element exists. Note: Majority Element is not necessarily the element that is 
  present most number of times.*/


#include <stdio.h>

int findMajorityElement(int nums[], int n) {
    int candidate = 0, count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    }
    return -1;
}

int main() {
    int n;


    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Size must be a positive integer.\n");
        return 1;
    }

    int nums[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    int result = findMajorityElement(nums, n);
    printf("%d\n", result);

    return 0;
}
