#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "hello";

    if (strcmp(str1, str2) == 0) {
        printf("Strings are the same");
    } else {
        printf("Strings are different");
    }

    return 0;
}
