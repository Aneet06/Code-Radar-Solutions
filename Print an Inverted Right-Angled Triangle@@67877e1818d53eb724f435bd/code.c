// Your code here...
#include <stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        // Inner loop for printing stars
        for (int j = 1; j <= n+1-i; j++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}