#include <stdio.h>

int main() {
 
 int n;
 int num = 1;
 printf("enter the value:");
 scanf("%d",&n);
 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%2d ",num);
            num=num+1;
        }
        printf("\n"); 
    }

    return 0;
}