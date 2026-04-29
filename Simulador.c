#include<stdio.h>

void menu(void){
printf("=========================\n");
printf("   RECARGA DE BATERIA\n");
printf("=========================\n");
printf("1 - Informacoes do carro\n");
printf("2 - Energia consumida\n");
printf("3 - Tempo estimado de recarga\n");
printf("4 - Custo da recarga\n");
printf("5 - Relatorio de uso\n");
printf("6 - Fim da Simulacao\n");
printf("Escolha uma opcao: ");
}




int main(){

int opcao;
float total_kwh, ener_consumida, porcentagem, valor_total, tempo, porcentagem_f;


while(opcao != 6){

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
        // calculos
        ener_consumida = total_kwh - total_kwh*(porcentagem/100); // energia consumida pelo carro para carregar 100%
        tempo = (ener_consumida * 60) / 50; // tempo em minutos
        valor_total = ener_consumida * 2 + 1.80; // preço por kwh = R$2 ; taxa de ativação = R$1,80 
        porcentagem_f = 100 - porcentagem; // quantos % falta para carregar o carro
            break;
        case 2:
        printf("=========================\n");
        printf("A energia consumida pelo carro e de: %.2f kWh\n", ener_consumida);
        printf("=========================\n");
        printf("\n");
            break;
        case 3:
        printf("=========================\n");
        printf("O tempo de regarda e de %.2f minutos\n", tempo); // carregador rapido (DC 50 Kw) 100% em 1 hora
        printf("=========================\n");
        printf("\n");
            break;
        case 4:
        printf("=========================\n");
        printf("O custo total do abastecimento e de: R$%.2f\n", valor_total); // total = (kWh adicionado) X (Preço por kWh) + Taxa de ativação
        printf("=========================\n");
        printf("\n");
            break;
        case 5:
        printf("=========================\n");
        printf("       RELATORIO\n");
        printf("=========================\n");
        printf("kWh do carro: %.2f\n", total_kwh);
        printf("Porcentagem a ser carregada: %.0f%%\n", porcentagem_f);
        printf("Energia consumida pelo carro: %.2f kWh\n", ener_consumida);
        printf("Tempo estimado de regarda: %.2f minutos\n", tempo);
        printf("Custo total do abastecimento: R$%.2f\n", valor_total);
        printf("\n");
            break;
        case 6:
        printf("---- Fim da Simulacao ----");
            break;
    }

}
    return 0;
}