#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char estado1;
char nomeestado1[50];
char codcidade1[5];
char estado2;
char nomeestado2[50];
char codcidade2[5];
int populacao1, pontoturistico1, populacao2, pontoturistico2;
float area1, pib1, area2, pib2;

printf("Voce iniciou o jogo das cartas das cidades \n\n\n\n");

printf("Para iniciarmos nosso jogo, precisaremos que voce adicione algumas informacoes de duas cidades diferentes abaixo \n\n");

printf("Qual sera o caractere da primeira cidade? \n");
scanf("%c", &estado1);

printf("Escolha o codigo da primeira cidade \n");
scanf("%s", &codcidade1);

printf("Qual seria o nome da primeira cidade? \n");
scanf("%s", &nomeestado1);

printf("Qual a populacao da primeira cidade? \n");
scanf("%d", &populacao1);

printf("Qual a area da primeira cidade? \n");
scanf("%f", &area1);

printf("Qual o pib da primeira cidade? \n");
scanf("%f", &pib1);

printf("Qual o numero total de pontos turisticos da cidade 1? \n");
scanf("%d", &pontoturistico1);

printf("\nParabens, voce finalizou o cadastro dos dados da primeira cidade, siga agora para a segunda cidade! \n\n\n\n");

printf("Preencha agora os dados da segunda cidade abaixo: \n\n");

printf("Qual sera o caractere da segunda cidade? \n");
scanf("%c", &estado2);

printf("Escolha o codigo da segunda cidade: \n");
scanf("%s", &codcidade2);

printf("Qual seria o nome da segunda cidade? \n");
scanf("%s", &nomeestado2);

printf("Qual a populacao da segunda cidade? \n");
scanf("%d", &populacao2);

printf("Qual a area da segundaa cidade? \n");
scanf("%f", &area2);

printf("Qual o pib da segunda cidade? \n");
scanf("%f", &pib2);

printf("Qual o numero total de pontos turisticos da cidade 2? \n\n\n");
scanf("%d", &pontoturistico2);

printf("Meus parabens, voce acaba de finalizar o cadastro das cidades do jogo, prossiga abaixo e confira se os dados estao corretos das duas cidades. \n\n\n");



printf("Cidade 1 \n\n\n");

printf("Estado: %c\n", estado1);
printf("Codigo do Estado: %s\n", codcidade1);
printf("Nome do Estado: %s\n", nomeestado1);
printf("Populacao total do estado: %d\n", populacao1);
printf("Area da primeira cidade: %f\n", area1);
printf("Pib da primeira cidade: %f\n", pib1);
printf("Pontos turisticos do Estado: %d \n\n\n\n\n\n", pontoturistico1);


printf("Cidade 2 \n\n\n");

printf("Estado: %c\n", estado2);
printf("Codigo do Estado: %s\n", codcidade2);
printf("Nome do Estado: %s\n", nomeestado2);
printf("Populacao total do estado: %d\n", populacao2);
printf("Area da segundaa cidade: %f\n", area2);
printf("Pib da segundaa cidade: %f\n", pib2);
printf("Pontos turisticos do Estado: %d \n\n\n", pontoturistico2);

printf("Esses foram os dados adicionados pelo usuario para as cidades\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
