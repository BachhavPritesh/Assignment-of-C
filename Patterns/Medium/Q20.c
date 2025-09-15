#include <stdio.h>

int main(){

    int n;
    int counter=65;
    printf("enter the value: ");
    scanf("%d", &n);
    
    for(int i=1;i<=n; i++){
        
        for(int k=1;k<=i;k++){
            printf("%c",counter);
            counter++;
        }
        
        printf("\n");
    }
    return 0;
}