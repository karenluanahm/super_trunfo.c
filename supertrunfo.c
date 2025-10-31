#include <stdio.h>
#include <string.h>

// Definindo a estrutura (struct) para uma carta do Super Trunfo
// Isso torna o código mais legível e a manipulação dos dados mais simples.
typedef struct {
    char estado;           // Ex: 'A'
    char codigo[4];        // Ex: "A01" (precisa de 4: 3 caracteres + \0)
    char nome_cidade[50];
    int populacao;         // Número de habitantes
    float area_km2;        // Área em km²
    float pib_bilhoes;     // PIB em bilhões
    int pontos_turisticos;
} Carta;

// Função principal do programa
int main() {
    // 1. Declaração das variáveis (duas structs para as duas cartas)
    Carta carta1;
    Carta carta2;

    // --- CADASTRO DA CARTA 1 ---
    printf("==========================================\n");
    printf("   CADASTRO DA CARTA 1 - PAISAGEM URBANA\n");
    printf("==========================================\n");

    // Lendo o Estado (char)
    printf("1. Digite a letra do Estado (A a H): ");
    // O espaco antes de %c eh crucial para ignorar qualquer espaco ou ENTER anterior
    scanf(" %c", &carta1.estado);

    // Lendo o Codigo (string)
    printf("2. Digite o Codigo da Carta (Ex: A01): ");
    scanf("%s", carta1.codigo);

    // Lendo o Nome da Cidade (string)
    printf("3. Digite o Nome da Cidade: ");
    scanf("%s", carta1.nome_cidade);

    // Lendo a População (int)
    printf("4. Digite a População (num. habitantes): ");
    scanf("%d", &carta1.populacao);

    // Lendo a Área (float)
    printf("5. Digite a Área (em km²): ");
    scanf("%f", &carta1.area_km2);

    // Lendo o PIB (float)
    printf("6. Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pib_bilhoes);

    // Lendo o Número de Pontos Turísticos (int)
    printf("7. Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);


    // --- CADASTRO DA CARTA 2 ---
    printf("\n==========================================\n");
    printf("   CADASTRO DA CARTA 2 - PAISAGEM URBANA\n");
    printf("==========================================\n");

    // Lendo o Estado (char)
    printf("1. Digite a letra do Estado (A a H): ");
    scanf(" %c", &carta2.estado);

    // Lendo o Codigo (string)
    printf("2. Digite o Codigo da Carta (Ex: B02): ");
    scanf("%s", carta2.codigo);

    // Lendo o Nome da Cidade (string)
    printf("3. Digite o Nome da Cidade: ");
    scanf("%s", carta2.nome_cidade);

    // Lendo a População (int)
    printf("4. Digite a População (num. habitantes): ");
    scanf("%d", &carta2.populacao);

    // Lendo a Área (float)
    printf("5. Digite a Área (em km²): ");
    scanf("%f", &carta2.area_km2);

    // Lendo o PIB (float)
    printf("6. Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pib_bilhoes);

    // Lendo o Número de Pontos Turísticos (int)
    printf("7. Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);


    // --- EXIBIÇÃO DAS CARTAS ---
    printf("\n\n==========================================\n");
    printf("   DADOS CADASTRADOS - SUPER TRUNFO\n");
    printf("==========================================\n");

    // Exibindo a Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("População: %d habitantes\n", carta1.populacao);
    // %.2f formata o float com 2 casas decimais
    printf("Área: %.2f km²\n", carta1.area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib_bilhoes);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontos_turisticos);

    // Exibindo a Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib_bilhoes);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontos_turisticos);

    printf("==========================================\n");

    return 0;
}