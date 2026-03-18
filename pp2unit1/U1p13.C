#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int len=0, i=0;

    gets(str);

    printf("Using strlen: %lu\n", strlen(str));

    while(str[i] != '\0') {
        len++;
        i++;
    }
    printf("Without function: %d", len);

    return 0;
}
