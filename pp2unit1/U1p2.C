#include <stdio.h>
int main() {
    int n, i, a[100], sum=0;
    float avg;

    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = sum / (float)n;
    printf("Total = %d\nAverage = %.2f", sum, avg);
    return 0;
}
