#include <stdio.h>

int main(){

    int n;
    printf("enter the value: ");
    scanf("%d", &n);
    
    for(int i=1;i<=n; i++){
        
        for(int k=65;k<=n-i+65;k++){
            printf("%c",k);
        }
        
        printf("\n");
    }

    return 0;
}
