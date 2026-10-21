//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int seen[1000] = {0};   

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        if (seen[x] == 1) {
            printf("%d", x);
            return 0;       
        seen[x] = 1;
    }

    return 0;
}