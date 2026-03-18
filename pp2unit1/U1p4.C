#include <stdio.h>
int main() {
    int n, i, a[100];
    int pos=0, neg=0, even=0, odd=0;

    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);

        if(a[i] >= 0) pos++;
        else neg++;

        if(a[i] % 2 == 0) even++;
        else odd++;
    }

    printf("Positive=%d Negative=%d Even=%d Odd=%d", pos, neg, even, odd);
    return 0;
}
