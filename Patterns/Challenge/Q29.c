#include <stdio.h>

int main() {

int n;
printf("enter the value:");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    
   for(int k=1;k<=2*i-1;k++){
       printf("%d",k);
   }
    printf("\n");
}

for(int l=n-1;l>=1;l--){
    
    for(int m=1;m<=n-l;m++){
        printf(" ");
    }
    
   for(int k=1;k<=2*l-1;k++){
       printf("*");
   }
    printf("\n");
}

    return 0;
}