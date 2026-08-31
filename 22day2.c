#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) 
    {
        double numerator = 2.0 * i + 1;       
        double denominator = (i == 0) ? 1.0 : (2.0 * i + 2); 
        sum += numerator / denominator;
    }

    printf("%.1f\n", sum);
    return 0;
}
