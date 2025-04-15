#include<stdio.h>
int main (){
        
    printf("Movimento da Torre\n");
    
    for(int i = 0;i <=4;i++){
        printf("Direita\n");
    }
    
    printf("Movimento do Bispo\n");
    int i = 0;
    do{
        printf("Cima\n");
        printf("Direita\n");
        i++;
       
    } while(i <=4);
    
    printf("Movimento da Rainha\n");

    i = 0;
    while(i<=7){
        printf("Esquerda\n");
        i++;
    }
    return 0;
}