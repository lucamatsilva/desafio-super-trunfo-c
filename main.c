/*
 =========================================
  Desafio: Super Trunfo - Países
  Autor: Mateu
  Data: 01/10/2025
  Nível: Mestre
 =========================================
*/
#include <stdio.h>


int main () {

// ===== TÍTULO DO PROGRAMA =====
    printf("========================================\n");
    printf("###   SUPER TRUNFO: PAISES - CADASTRO   ###\n");
    printf("========================================\n\n"); 
    // \n\n para dar um espaço extra

//código vira aqui dentro
// Carta 1
unsigned long int populacao1;
//unsigned long int = para colocar numeros inteiros muito grandes
float area1;
float pib1;
float densidade1;
float pib_per_capita1;
int npt1;
//Número de pontos turísticos

// Carta 2
unsigned long int populacao2;
float area2;
float pib2;
float densidade2;
float pib_per_capita2;
int npt2;
//Número de pontos turísticos


// Carta 1

printf ("Digite a população da primeira carta:");
scanf ("%lu", &populacao1);
// A letra "E comercial" = & serve para vincular uma variável que será armazenado o valor 

printf ("Digite a área da primeira carta:\n");
scanf("%f", &area1);

printf ("Digite o PIB da primeira carta:");
scanf("%f", &pib1);

printf ("Digite o número de pontos turísticos da primeira carta:");
scanf("%d", &npt1);

printf ("A população da primeira corresponde a: %lu\n", populacao1);
printf ("A área da primeira corresponde a: %.2f\n", area1);
printf ("O PIB da primeira corresponde a: %.2f\n", pib1);
printf ("Os pontos turísticos da primeira corresponde a: %d\n", npt1);
// Para impressão dos valores armazenados, é apenas colocado a variável e não utiliza o "&"

pib_per_capita1 = pib1 / populacao1;
densidade1 = populacao1 / area1;
printf ("PIB per capita da primeira carta corresponde a: %.2f", pib_per_capita1);
printf ("Densidade da primeira carta corresponde a: %.2f", densidade1);

// Carta 2

printf ("Digite a população da segunda carta:");
scanf ("%lu", &populacao2);

printf ("Digite a área da segunda carta:");
scanf("%f", &area2);

printf ("Digite o PIB da segunda carta:");
scanf("%f", &pib2);

printf ("Digite o número de pontos turísticos da segunda carta:");
scanf("%d", &npt2);

printf ("A população da segunda corresponde a: %lu\n", populacao2);
printf ("A área da segunda corresponde a: %.2f\n", area2);
printf ("O PIB da segunda corresponde a: %.2f\n", pib2);
printf ("Os pontos turísticos da segunda corresponde a: %d\n", npt2);
// Para impressão dos valores armazenados, é apenas colocado a variável e não utiliza o "&"

pib_per_capita2 = pib2 / populacao2;
densidade2 = populacao2 / area2;
printf ("PIB per capita da segunda carta corresponde a: %.2f", pib_per_capita2);
printf ("Densidade da segunda carta corresponde a: %.2f", densidade2);


//Resultados
// Pergunta: o pib da carta 1 é maior que o pib da carta 2?
int vitoria_pib = pib1 > pib2;
int area_maior = area1 > area2;
int vitoria_populacao = populacao1 > populacao2;
int vitoria_densidade = densidade1 < densidade2;
int vitoria_pib_per_capita = pib_per_capita1 > pib_per_capita2;
int vitoria_npt = npt1 > npt2;
printf ("Vencedor do maior PIB: %d", vitoria_pib);
printf("Carta vencedora: %s\n", (pib1 > pib2 ? "Carta 1" : "Carta 2"));
printf("Carta vencedora: %s\n", (area1 > area2 ? "Carta 1" : "Carta 2"));
printf("Carta vencedora: %s\n", (populacao1 > populacao2 ? "Carta 1" : "Carta 2"));
printf("Carta vencedora: %s\n", (pib_per_capita1 > pib_per_capita2 ? "Carta 1" : "Carta 2"));
printf("Carta vencedora: %s\n", (npt1 > npt2 ? "Carta 1" : "Carta 2"));
printf("Carta vencedora: %s\n", (densidade1 < densidade2 ? "Carta 1" : "Carta 2"));

float super_poder1 = populacao1 + area1 + pib1 + npt1 + pib_per_capita1 + (1.0 / densidade1);
float super_poder2 = populacao2 + area2 + pib2 + npt2 + pib_per_capita2 + (1.0 / densidade2);

Printf ("Super poder da carta 1: %.2f\n", super_poder1);
Printf ("Super poder da carta 2: %.2f\n", super_poder2);

printf ("Carta vencedora no super poder: %s\n", (super_poder1 > super_poder2 ? "Carta 1" : "Carta 2"));



return 0;
}