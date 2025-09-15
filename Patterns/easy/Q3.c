#include <stdio.h>

int main() {
   int n;
   printf("enter the value");
   scanf("%d", &n);
   
   for(int i=0;i<n;i++){
     printf("%c",'A'+i);
   }
printf("\n");
    return 0;
}