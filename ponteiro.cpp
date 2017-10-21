#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main(){
    
    int i=57, *pti;
    
    pti=&i;
    
    printf("Impessão de Valores\n");
    printf("Conteudo:%d\nEndereco:%p\nConteudo:%d\n",i,&i,*&i);
    printf("Endereco:%p\nEndereco:%p\nConteudo:%d\n",&pti,pti,*pti);
    
    system("pause");
    return 0;
    
}
