#include <stdio.h>

int main(){

    printf("BEM VINDO AO SUPER TRUNFO \n");
    
    char carta[30], estado[50], cidade[50], codigo[40];
    int populacao;
    float area;
    float PIB;
    int numpontosturisticos;

    printf("Carta1: \n", carta);
    scanf("%s", carta);
    
    printf("Estado: \n", estado);
    scanf("%s", estado);

    printf("Código da cidade: \n", codigo);
    scanf("%s", codigo);

    printf("Nome da Cidade: \n", cidade);
    scanf("%s", cidade);

    printf("População: \n", &populacao);
    scanf("%f", &populacao);

    printf("Área total: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &numpontosturisticos);


    printf("Carta2: \n", carta);
    scanf("%s", carta);
    
    printf("Estado: \n", estado);
    scanf("%s", estado);

    printf("Código da cidade: \n", codigo);
    scanf("%s", codigo);

    printf("Nome da Cidade: \n", cidade);
    scanf("%s", cidade);

    printf("População: \n", &populacao);
    scanf("%f", &populacao);

    printf("Área total: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &numpontosturisticos);

    printf("Carta1: %s \n", carta);
    printf("Estado %s \n", estado);
    printf("Código da cidade: %d \n", codigo);
    printf("Nome da cidade: %s \n");
    printf("População: %f \n", populacao);
    printf("Área total: %f \n", area);
    printf("PIB: %f \n", PIB);
    printf("Número de pontos turisticos: %d \n", numpontosturisticos);

    printf("Carta2: %s \n", carta);
    printf("Estado %s \n", estado);
    printf("Código da cidade: %d \n", codigo);
    printf("Nome da cidade: %s \n");
    printf("População: %f \n", populacao);
    printf("Área total: %f \n", area);
    printf("PIB: %f \n", PIB);
    printf("Número de pontos turisticos: %d \n", numpontosturisticos);

    return 0;

}
