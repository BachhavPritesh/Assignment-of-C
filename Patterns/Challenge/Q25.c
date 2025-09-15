#include <stdio.h>

int main(){

    int n;
    
    printf("enter the value: ");
    scanf("%d", &n);
    
    for(int i=65;i<=n+65; i++){
        
        for(int j=65;j<=i;j++){
            printf("%c",j);
        }
        for(int k=i-1;k>=65;k--){
            printf("%c",k);
          
        }
        
        printf("\n");
    }
    return 0;
}