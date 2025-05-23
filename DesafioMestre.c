#include <stdio.h>

// Função recursiva para movimentar as peças
 void recursiveLoop(int n) {
    //Estrutura de repetição para movimentar a torre
    if (n == 1 && n > 0) {
        for(int torre = 1; torre <= 5; torre++ ) {
        if ( torre % 1 == 0) {
        printf("Direita\n", torre);
        }
    }
    //Estrutura de repetição para movimentar a rainha
    } else if (n == 3 && n > 0) {
        for(int rainha = 1; rainha <= 8; rainha++ ) {
        if ( rainha % 1 == 0) {
        printf("Esquerda\n", rainha);
        }
    }
    //Estrutura de repetição para movimentar o bispo
    } else if (n == 2 && n > 0) {
        for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 1; j++) {
            printf("Direita\t", i * j);
        }
        printf("Cima\n");
    }
    }
}



int main(){
    int torre = 1;
    int bispo = 2;
    int rainha = 3;
    int cavalo = 1;
    int escolha;

    printf("### Movimentação de peças de Xadrez ###\n");
    printf("\n");
    //Emprego do DOWHILE para retornar ao menu inicial
do{ printf("Escolha qual peça movimentar:\n");
    printf("1. TORRE\n");
    printf("2. BISPO\n");
    printf("3. RAINHA\n");
    printf("4. CAVALO\n");
    printf("5. Encerrar o jogo!\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Movimentando a torre ...\n");
        //Utilização do recursiveloop para movimentação
        recursiveLoop(torre);
    break;
    case 2:
        printf("Movimentando o bispo ...\n");
        //Utilização do recursiveloop para movimentação
        recursiveLoop(bispo);
    break;
    case 3:
        printf("Movimentando a rainha ...\n");
        //Utilização do recursiveloop para movimentação
        recursiveLoop(rainha);
    break;
    case 4:
        printf("Movimentando o cavalo ...\n");
        //Estrutura de repetição para movimentar a peça
        for(int cavalo = 1; cavalo <= 1; cavalo++ ) {
          for ( int cav = 1; cav <=2; cav++) {
        printf("Cima\n", cavalo); 
        }  
        printf("Direita\n", cavalo);
    }
        do {
            int cav = 1;
            do {
                printf("Cima\n", cavalo);
                cav++;
            } while (cav <=2);
            printf("Direita\n", cavalo);
            cavalo++;
        } while (cavalo <= 1);
    break;
    case 5:
        printf("Saindo...\n");
    break;

    default:
        printf("Opção Inválida\n");
        break;
     }} while (escolha != 5);


return 0;

}