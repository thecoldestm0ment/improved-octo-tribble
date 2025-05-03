#include <stdio.h>

int main() {
    float a, b, avg;
    int sum;

    scanf("%f %f", &a, &b);

    sum = a + b;
    avg = (a + b) / 2;

    printf("%d %.1f", sum, avg);
    return 0;
}
