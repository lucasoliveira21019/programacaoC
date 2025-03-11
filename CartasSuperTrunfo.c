#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int populacao1,numeroptsturistico1,pop2,nmr2;
    float area1,pib1,area2,pib2;
    // Nesse momento é pedido ao usuário que informe as características da primeira carta
    printf("insira os dados da primeira carta, referente à população:\n");
    scanf("%d",&populacao1);
    printf("informe a área da primeira carta: ");
    scanf(" %f",&area1);
    printf("\ninforme o pib da cidade: \n");
    scanf(" %f",&pib1);
    printf("informe o número de pontos turísticos que a cidade possui: ");
    scanf(" %i",&numeroptsturistico1);
    printf("insira os dados da segunda carta, referente à população:\n");
    scanf("%d",&pop2);
    printf("informe a área da segunda carta: ");
    scanf(" %f",&area2);
    printf("\ninforme o pib da cidade: \n");
    scanf(" %f",&pib2);
    printf("informe o número de pontos turísticos que a cidade possui: ");
    scanf(" %i",&nmr2);
    printf("primeira carta:\n cidade: CARUARU\n");
    printf("código da carta: A01\n");
    printf("população: %i\n", populacao1);
    printf("área: %f\n",area1);
    printf("pib: %f\n", pib1);
    printf("pontos turisticos: %i\n", numeroptsturistico1);
    printf("segunda carta:\ncidade:RECIFE\ncódigo:A02\n");
    printf("população: %i\n", pop2);
    printf("área: %f\n",area2);
    printf("pib: %f\n", pib2);
    printf("pontos turisticos: %i\n", nmr2);



    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
