#include <stdio.h>
int main(){

char Estado1[3], Estado2[3], codigo_da_carta1[10], codigo_da_carta2 [10];
char Nome_da_cidade1[50], Nome_da_cidade2[50];
int Populacao1, Populacao2;
float area1, PIB1, area2, PIB2;
int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;

    printf("Digite o estado da primeira carta: \n");
    scanf("%s", Estado1);

    printf("Informe o código da primeira carta: \n");
    scanf("%s", codigo_da_carta1);
    
    printf("Informe a cidade da primeira carta: \n");
    scanf("%s", Nome_da_cidade1);

    printf("Qual a população da cidade? \n");
    scanf("%d", &Populacao1);

    printf("Digite a área da cidade da primeira carta: \n");
    scanf ("%f", &area1);

    printf("Qual o PIB da cidade da primeira carta? \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade da primeira carta: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

//resposta1

    printf("Carta1 \n");
    printf("Estado: %s \n", Estado1);
    printf("Código: %s \n", codigo_da_carta1);
    printf("Nome da cidade: %s \n", Nome_da_cidade1);
    printf("População: %d \n", Populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Pontos: %d \n", numero_de_pontos_turisticos1);

    //perguntas carta2

    printf("Digite o estado da segunda carta: \n");
    scanf("%s", Estado2);

    printf("Informe o código da segunda carta: \n");
    scanf("%s", codigo_da_carta2);
    
    printf("Qual o nome da sua cidade da segunda carta? \n");
    scanf("%s", Nome_da_cidade2);

    printf("Qual a população da sua cidade da segunda carta? \n");
    scanf("%d", &Populacao2);

    printf("Digite a área da sua cidade da segunda carta: \n");
    scanf ("%f", &area2);

    printf("Qual o PIB da cidade da segunda carta? \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade da segunda carta: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    //resposta carta 2

    printf("Carta2 \n");
    printf("Estado: %s \n", Estado2);
    printf("Código: %s \n", codigo_da_carta2);
    printf("Nome da cidade: %s \n", Nome_da_cidade2);
    printf("População: %d \n", Populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos: %d \n", numero_de_pontos_turisticos2);

    

    return 0;
}
