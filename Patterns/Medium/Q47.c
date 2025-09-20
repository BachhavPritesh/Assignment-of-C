#include <stdio.h>

int main() {
 
 int n;
 int num = 2;
 printf("enter the value:");
 scanf("%d",&n);
 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ",num);
            num=num+2;
        }
        printf("\n"); 
    }

    return 0;
}