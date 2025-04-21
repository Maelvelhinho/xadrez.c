#include<stdio.h>

void movimentoTorre(int torre){
    if (torre > 0){
        printf("Direita\n");
        movimentoTorre(torre-1);
    }
}

void movimentoBispo (int bispo){
    if (bispo > 0){
        printf("Cima\n");
        printf("Direita\n");
        movimentoBispo(bispo-1);
    }
}

void movimentoRainha (int casas){
    if(casas > 0){
        printf("Esquerda\n");
        movimentoRainha(casas-1);
    }
}



int main (){
        
    printf("Movimento da Torre\n");
    
    movimentoTorre(5);
    
    printf("Movimento do Bispo\n");
   
    movimentoBispo(5);
    
    printf("Movimento do Cavalo\n");

    int cavalo = 0;
    while(cavalo<1){
        for(int c = 0; c < 2;c++){
            printf("Cima\n");
        }
        printf("Esquerda\n");
        cavalo++;
    }

    return 0;
}