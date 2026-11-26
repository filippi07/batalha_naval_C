#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerar_navios(char tabuleiro[10][10]){
    for (int i = 0; i < 5; i++){
        int linha = rand() % 10;
        int coluna = rand() % 10;

        //nao permite criar dois navios no mesmo lugar
        while(tabuleiro[linha][coluna] != '-'){
            linha = rand() % 10;
            coluna = rand() % 10;
        }

        tabuleiro[linha][coluna] = 'N';
    }
}

void mostrar_tabuleiro(char tabuleiro[10][10]){
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(tabuleiro[i][j] == 'N'){
                printf("[-]");
            }else{
            printf("[%c]", tabuleiro[i][j]);
            }
        }   
        printf("\n");
    }
} 

void receber_coordenadas(int *x, int *y){
    printf("Escolha a coordenada [X] e [Y] da bomba\n");

    while(scanf("%d %d", x, y) != 2 || *x < 1 || *x > 10 || *y < 1 || *y > 10){
        printf("\tCoordenadas invalidas! Digite novamente:\n");

        while(getchar() != '\n');
    }

    (*x)--;
    (*y)--;
}

int main(){
    int x, y;
    char tabuleiro[10][10];
    int acertos = 0;

    srand(time(NULL));

    // inicializa a matriz
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = '-';
        }
    }

    gerar_navios(tabuleiro);
     printf("1 - escrevas as coordenadas em um espaco entre os numeros\n"
            "2 - acerte cinco navios para ganhar o jogo\n");
    while(acertos < 5){
       
        receber_coordenadas(&x, &y);

        while(tabuleiro[x][y] == 'O' || tabuleiro[x][y] == 'X'){
             printf("Essa coordenada ja foi utilizada!\n");
             receber_coordenadas(&x, &y);
        }

    if(tabuleiro[x][y] == 'N'){
        tabuleiro[x][y] = 'X';
        printf("\tVoce acertou\n");
        acertos++;

        if(acertos == 5){
                mostrar_tabuleiro(tabuleiro);
                printf("\tparabens voce ganhou!!");
                return 0;
        }
    }else{
        printf("\tVoce errou\n");
        tabuleiro[x][y] = 'O';
        }

        mostrar_tabuleiro(tabuleiro);
        printf("\n");
    }
        return 0;
}