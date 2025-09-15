#include <stdio.h>

int main(){

    int n;
    printf("enter the value: ");
    scanf("%d", &n);
    
    for(int i=65;i<=n+65; i++){
        
        for(int j=1;j<=n-i+65; j++){
            printf("  ");
            
        }
        
        for(int k=65;k<=(2 * i - 67);k++){
            printf("%c ",k);
        }
        
        printf("\n");
    }



  



    return 0;
}


