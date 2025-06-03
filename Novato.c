#include <stdio.h>

int main () {

float area1, area2, turisticos1, turisticos2, per_capita1, per_capita2, PIB1, PIB2, populacao1, populacao2;
float densidade1, densidade2, Super_Poder1, Super_Poder2;
float resuldado1, resuldado2, resuldado3, resuldado4, resuldado5, resuldado6, resuldado7, resuldado8, resuldado9, resuldado10;
char codigo1[20];
char codigo2[20];
char estado1[20];
char estado2[20];
char cidade1[20];
char cidade2[20];

densidade1 = (populacao1 / area1);
densidade2 = (populacao2 / area2);
per_capita1 = (PIB1 / populacao1);
per_capita2 = (PIB2 / populacao2);
Super_Poder1 = populacao1 + area1 + PIB1 + turisticos1 + per_capita1 + (area1 / populacao1);
Super_Poder2 = populacao2 + area2 + PIB2 + turisticos2 + per_capita2 + (area2 / populacao2);
/*
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
*/

printf("Dados da carta 1 \n");
printf("Digite o código do estado: \n");
scanf("%s", &codigo1);

printf("Digite o nome do estado: \n");
scanf("%s", &estado1);

printf("Digite o nome da cidade: \n");
scanf("%s", &cidade1);

printf("Digite a área do estado: \n");
scanf("%f", &area1);

printf("Digite o número populacional: \n");
scanf("%f", &populacao1);

printf("Digite o PIB: \n");
scanf("%f", &PIB1);
printf("Digite o número de pontos turísticos: \n");
scanf("%f", &turisticos1);

densidade1 = (populacao1 / area1);
per_capita1 = (PIB1 / populacao1);

printf("Dados da carta 1 \n");
printf("Digite o código do estado: \n");
scanf("%s", &codigo2);
printf("Digite o nome do estado: \n");
scanf("%s", &estado2);

printf("Digite o nome da cidade: \n");
scanf("%s", &cidade2);

printf("Digite a área do estado: \n");
scanf("%f", &area2);

printf("Digite o número populacional: \n");
scanf("%f", &populacao2);

printf("Digite o PIB: \n");
scanf("%f", &PIB2);
printf("Digite o número de pontos turísticos: \n");
scanf("%f", &turisticos2);

densidade2 = (populacao2 / area2);
per_capita2 = (PIB2 / populacao2);

printf("Resultado das cartas: \n");
printf("A população da carta (%s) é maior que a carta (%s): %d\n", codigo1, codigo2, (populacao1 > populacao2));
printf("O PIB da carta (%s) é maior que a carta (%s): %d\n", codigo1, codigo2, (PIB1 > PIB2));
printf("A área da carta (%s) é maior que a carta (%s): %d\n", codigo1, codigo2, (area1 > area2));
printf("O número de pontos turísticos da carta (%s) é maior que a carta (%s): %d\n", codigo1, codigo2, (turisticos1 > turisticos2));
printf("A dencidade populacional da carta (%s) é menor que a carta (%s): %d\n", codigo1, codigo2, (densidade1 > densidade2));
printf("O PIB per capita da carta (%s) é maior que a carta (%s): %d\n", codigo1, codigo2, (per_capita1 > per_capita2));
printf("O Super Poder da carta (%s) é maior que a carta (%s): %d\n", codigo1, codigo2, (Super_Poder1 > Super_Poder2));
printf("%s - %s - %s ----- %s - %s - %s \n", codigo1, estado1, cidade1, codigo2, estado2, cidade2);

}