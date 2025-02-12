#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    char estado;
    int numeroCidade;
    char codigo[4]; 
    char nomeCidade[50];
    int populacao;
    float area, pib;
    int pontosTuristicos;

    // Entrada dos dados
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado); // Lê um caractere com espaço em branco antes do %c para consumir o \n do buffer do teclado
    
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &numeroCidade); // Lê um número inteiro e armazena na variável numeroCidade
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade); // Lê uma string com espaços

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Gerar o código da cidade
    sprintf(codigo, "%c%02d", estado, numeroCidade);

    // Exibir os dados cadastrados
    printf("\n===== Dados da Cidade =====\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nomeCidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}
