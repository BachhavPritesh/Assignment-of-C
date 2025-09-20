#include <stdio.h>

int main() {

    int r, c;
    printf("enter the rows:");
    scanf("%d", &r);
    
    printf("enter the colums:");
    scanf("%d", &c);

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            
            if (i == 1 || i == r || j == 1 || j == c) {
                printf("%d", j);
            } else {
                printf(" ");
            }
        }
        printf("\n"); 
    }

    return 0;
}