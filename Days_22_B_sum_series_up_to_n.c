#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        float term;
        if (i == 1) {
            term = 1.0;
            printf("1");
        } else {
            int numerator = 2 * i - 1;
            int denominator = 2 * i;
            term = (float)numerator / denominator;
            printf(" + %d/%d", numerator, denominator);
        }
        sum += term;
    }

    printf("\nSum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}