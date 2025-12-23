#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float DensidadePopulacional1;
    float PibPerCapta1;
    

    //Carta 2:
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float DensidadePopulacional2;
    float PibPerCapta2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    
    printf("Digite a letra do Estado 1 - De A a H: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", &cidade1);

    printf("Digite a população 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB 1: \n");
    scanf("%f", &pib1);

    printf("Digite Qtde dos Pontos Turísticos 1: \n");
    scanf("%d", &pontosTuristicos1);

    DensidadePopulacional1 = (float) populacao1 / area1;
    PibPerCapta1 = (float) pib1/populacao1;
  


    //Ler os dados para a variável 2
    printf("Digite a letra do Estado 2 - De A a H: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &cidade2);

    printf("Digite a população 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB 2: \n");
    scanf("%f", &pib2);

    printf("Digite Qtde dos Pontos Turísticos 2: \n");
    scanf("%d", &pontosTuristicos2);

    DensidadePopulacional2 = (float) populacao2 / area2;
    PibPerCapta2 = (float) pib2/populacao2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

     // Área para exibição dos dados da cidade
  printf("\n Carta 1: \n Letra do Estado: %c\n Código da carta: %s\n Nome da cidade: %s\n População: %d\n Área: %.2f\n PIB: %.2f\n Pontos Turísticos: %d\n Densidade Populacional: %.2f\n Pib per Capta: %f\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1, DensidadePopulacional1, PibPerCapta1);
  printf("\n Carta 2: \n Letra do Estado: %c\n Código da carta: %s\n Nome da cidade: %s\n População: %d\n Área: %.2f\n PIB: %.2f\n Pontos Turísticos: %d\n Densidade Populacional: %.2f\n Pib per Capta: %f\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2, DensidadePopulacional2, PibPerCapta2);

  //tema 3 - Operadores Relacionais. Area para mostrar os dados do exercício.
    if (populacao1 > populacao2){
        printf("A Carta 1 venceu!! Cidade: %s\n População de %d habitantes\n", cidade1, populacao1);
        } else {
        printf("A Carta 2 venceu!! Cidade: %s\n População de %d habitantes\n", cidade2, populacao2);
        } 

    return 0;
}
