#include <stdio.h>

int main() {
    int n;
    printf("Enter n (odd): ");
    scanf("%d", &n);

    int mid = n / 2; // center index for odd n

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || i == mid )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
