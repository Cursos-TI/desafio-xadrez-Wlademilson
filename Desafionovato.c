#include <stdio.h>
int main(){
    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int escolha;

    printf("### Movimentação de peças de Xadrez ###\n");
    printf("\n");
    //Emprego do DOWHILE para retornar ao menu inicial
do{ printf("Escolha qual peça movimentar:\n");
    printf("1. TORRE\n");
    printf("2. BISPO\n");
    printf("3. RAINHA\n");
    printf("4. Encerrar o jogo!\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Movimentando a torre ...\n");
        //Estrutura de repetição para movimentar a peça
        for(int torre = 1; torre <= 5; torre++ ) {
        if ( torre % 1 == 0) {
        printf("%d Direita\n", torre);
        }
    }
    break;
    case 2:
        printf("Movimentando o bispo ...\n");
        //Estrutura de repetição para movimentar a peça
        for(int bispo = 1; bispo <= 5; bispo++ ) {
        if ( bispo % 1 == 0) {
        printf("%d Cima, Direita\n", bispo);
        }
    }
    break;
    case 3:
        printf("Movimentando a rainha ...\n");
        //Estrutura de repetição para movimentar a peça
        for(int rainha = 1; rainha <= 8; rainha++ ) {
        if ( rainha % 1 == 0) {
        printf("%d Esquerda\n", rainha);
        }
    }
    break;
    case 4:
        printf("Saindo...\n");
    break;

    default:
        printf("Opção Inválida\n");
        break;
     }} while (escolha != 4);


return 0;

}