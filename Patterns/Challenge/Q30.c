#include <stdio.h>

int main(){

    int n;
    
    printf("enter the value: ");
    scanf("%d", &n);
    
    for(int i=65;i<n+65; i++){
        for(int f=1;f<=n+1+65-i;f++){
            printf(" ");
        }
        
        for(int j=65;j<=i;j++){
            printf("%c",j);
        }
        for(int k=i-1;k>=65;k--){
            printf("%c",k);
          
        }
        
        printf("\n");
    }
    
        for(int i=65+n-1;i>=65; i--){
        for(int f=1;f<=n+1+65-i;f++){
            printf(" ");
        }
        
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