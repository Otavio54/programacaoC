#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    
    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    
    printf("=== SUPER TRUNFO - CADASTRO DE CARTAS ===\n\n");
    
    // Primeira carta
    printf("--- PRIMEIRA CARTA ---\n");
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o codigo (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a area (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos1);
    
    printf("\n");
    
    // Segunda carta
    printf("--- SEGUNDA CARTA ---\n");
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a area (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos2);
    
    // Mostrar os resultados
    printf("\n=== CARTAS CADASTRADAS ===\n\n");
    
    // Mostrar primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    
    printf("\n");
    
    // Mostrar segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    
    return 0;
}