#include <stdio.h>

int main () {

float populacao, area, PIB, turisticos;
float densidade, per_capita;
char codigo[20];
char estado[20];
char cidade[20];

densidade = (populacao / area);
per_capita = (PIB / populacao);

printf("Digite o código do estado: \n");
scanf("%s", &codigo);

printf("Digite o nome do estado: \n");
scanf("%s", &estado);

printf("Digite o nome da cidade: \n");
scanf("%s", &cidade);

printf("Digite a área do estado: \n");
scanf("%f", &area);

printf("Digite o número populacional: \n");
scanf("%f", &populacao);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

printf("Digite o número de pontos turísticos: \n");
scanf("%f", &turisticos);

densidade = (populacao / area);
per_capita = (PIB / populacao);

printf("Dados da carta 1 \n");
printf("O código do estado é: %s\n", codigo);
printf("O nome do estado é: %s\n", estado);
printf("O nome da cidade é: %s\n", cidade);
printf("A área do estado é: %2.f\n", area);
printf("O o número populacional é: %2.f\n", populacao);
printf("O PIB é: %2.f\n", PIB);
printf("O número de pontos turísticos é: %2.f\n", turisticos);
printf("A densidade é: %2.f\n", densidade);
printf("O PIB per capita é: %2.f\n", per_capita);

printf("Digite o código do estado: \n");
scanf("%s", &codigo);

printf("Digite o nome do estado: \n");
scanf("%s", &estado);

printf("Digite o nome da cidade: \n");
scanf("%s", &cidade);

printf("Digite a área do estado: \n");
scanf("%f", &area);

printf("Digite o número populacional: \n");
scanf("%f", &populacao);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

printf("Digite o número de pontos turísticos: \n");
scanf("%f", &turisticos);

densidade = (populacao / area);
per_capita = (PIB / populacao);

printf("Dados da carta 2 \n");
printf("O código do estado é: %s\n", codigo);
printf("O nome do estado é: %s\n", estado);
printf("O nome da cidade é: %s\n", cidade);
printf("A área do estado é: %2.f\n", area);
printf("O o número populacional é: %2.f\n", populacao);
printf("O PIB é: %2.f\n", PIB);
printf("O número de pontos turísticos é: %2.f\n", turisticos);
printf("A densidade é: %2.f\n", densidade);
printf("O PIB per capita é: %2.f\n", per_capita);

}