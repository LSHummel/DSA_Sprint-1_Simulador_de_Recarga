#include<stdio.h>

void menu(void){
printf("=========================\n");
printf("   RECARGA DE BATERIA\n");
printf("=========================\n");
printf("1 - (entrada de informacoes)\n");
printf("2 - Tempo estimado de recarga\n");
printf("3 - Energia consumida\n");
printf("4 - Custo da recarga\n");
printf("5 - Fim da Simulacao\n");
printf("Escolha uma opcao: ");
}




int main(){

int opcao;
while(opcao != 5){

    menu();
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        printf("Opcao 1\n");
            break;
        case 2:
        printf("Opcao 2\n");
            break;
        case 3:
        printf("Opcao 3\n");
            break;
        case 4:
        printf("Opcao 4\n");
            break;
        case 5:
        printf("Fim da Simulacao");
            break;
    }

}
    return 0;
}