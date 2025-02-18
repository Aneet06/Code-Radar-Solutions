#include<stdio.h>

int main() {
    int a, b;

    // Read two integers separated by a comma
    scanf("%d,%d", &a, &b);  

    // Compare the values and print the result
    if (a < b) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
