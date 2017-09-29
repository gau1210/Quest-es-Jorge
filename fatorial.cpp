#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n,i,fat=1;
    
    scanf("%d",&n);
    
    for(i=n; i>1; i--){
             
             
             fat=fat*i;
             
    }if(n==0){
                       
             
             fat=1;
                       
             }
                       
    if(n<0){
                               
    printf("não existe fatorial de um numero negativo\n");
                               
         }
                               
    printf("%d",fat);
                               
    system("pause");                  
    return 0;
             
}
