#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main(){
    
    int a[]={38,45,27,3,9,18};
    int i,n=6,*p;
    
    for(i=0; i<n; i++){
             
      printf("%d  ",a[i]);
             
        }
          printf("\n");
             
    for(i=0; i<n; i++){
             
      printf("%d  ",*(a+i));
             
        }
          printf("\n");
          
          p=a;
             
            for(i=0; i<n; i++){
             
      printf("%d  ",*(p+i));
             
        }
          printf("\n");
          
          for(i=0; i<n; i++){
                   
                   printf("%d  ",*p);
                   
                   p++;
                   
          }
          printf("\n");
          
          p=a;
          for(i=0; i<n; i++){
                   
               printf("%d  ",*p++);
               
               //p++;
                   
          }
          printf("\n");
          //a=p;
             
        system("pause");
        return 0;
             
}
