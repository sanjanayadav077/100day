#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");

    for (int i = 1; i <= n; i++) {
        int numerator = 2 * i;
        int denominator = 4 * i - 1;
        float term = (float)numerator / denominator;

        sum += term;
        if (i == 1)
            printf("%d/%d", numerator, denominator);
        else
            printf(" + %d/%d", numerator, denominator);
    }

    printf("\nSum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}

        