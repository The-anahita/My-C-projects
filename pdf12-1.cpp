#include <stdio.h>
#include <math.h>

double taylor_tan(double x, int n) {
    double sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        int sign = (i % 2 == 0) ? 1 : -1;
        double term = sign * pow(x, 2 * i + 1) / tgamma(2 * i + 2);
        sum += term;
    }
    return sum;
}

int main() {
    double x;
    int n;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms in the Taylor series: ");
    scanf("%d", &n);

    double tan_x = taylor_tan(x, n);
    printf("Tan(%.2f) using %d terms of Taylor series: %.8f\n", x, n, tan_x);

    return 0;
}
