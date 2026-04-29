#include<stdio.h>

void menu(void){
printf("=========================\n");
printf("   RECARGA DE BATERIA\n");
printf("=========================\n");
printf("1 - (entrada de informacoes)\n");
printf("2 - Energia consumida\n");
printf("3 - Tempo estimado de recarga\n");
printf("4 - Custo da recarga\n");
printf("5 - Fim da Simulacao\n");
printf("Escolha uma opcao: ");
}




int main(){

int opcao;
float total_kwh, ener_consumida, porcentagem, valor_total, tempo;


while(opcao != 5){

    menu();
    scanf("%d", &opcao);
    printf("\n");
    switch(opcao){
        case 1:
        printf("=========================\n");
        printf("Quantos kWh cabem no carro: \n");
        scanf("%f", &total_kwh);
        printf("Porcentagem de energia do carro: \n");
        scanf("%f", &porcentagem);
        printf("=========================\n");
        printf("\n");
            break;
        case 2:
        ener_consumida = total_kwh - total_kwh*(porcentagem/100);
        printf("=========================\n");
        printf("A energia consumida pelo carro e de: %.2f kWh\n", ener_consumida);
        printf("=========================\n");
        printf("\n");
            break;
        case 3:
        tempo = (ener_consumida * 60) / 50;
        printf("=========================\n");
        printf("O tempo de regarda e de %.2f minutos\n", tempo); // carregador rapido (DC 50 Kw) 100% em 1 hora
        printf("=========================\n");
        printf("\n");
            break;
        case 4:
        valor_total = ener_consumida * 2 + 1.80; // preço por kwh = R$2 ; taxa de ativação = R$1,80 
        printf("=========================\n");
        printf("O custo total do abastecimento e de: R$%.2f\n", valor_total); // total = (kWh adicionado) X (Preço por kWh) + Taxa de ativação
        printf("=========================\n");
        printf("\n");
            break;
        case 5:
        printf("---- Fim da Simulacao ----");
            break;
    }

}
    return 0;
}