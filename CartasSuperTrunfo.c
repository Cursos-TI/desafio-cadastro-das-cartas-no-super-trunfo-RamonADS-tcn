#include <stdio.h>

printf("CARTAS DE SUPER TRUNFO");

int main() {
    //Definição das variáveis separadas para cada atributo da cidade.
    char estado, estado2;               // Letra de 'A' a 'H'
    char codigo[4], codigo2[4];            // Ex: "A01", "B03"
    char nomeCidade[50], nomeCidade2[50];       // Nome da cidade
    int populacao, populacao2, pontosTuristicos, pontosTuristicos2;             // Número de habitantes e Pontos Turisticos
    float area, area2, pib, pib2;                // Área em km² e o Produto interno Bruto   
    
    // Cadastro das Cartas:
    //Carta 1:
    printf("DIGITE OS DADOS DA PRIMEIRA CARTA: \n");
        
        printf("Estado de (A-H): ");
        scanf(" %c", &estado); // espaço antes do %c para ignorar o '\n'

        printf("Codigo da carta (ex: A01): ");
        scanf("%s", &codigo);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", &nomeCidade);

        printf("Populacao: ");
        scanf("%d", &populacao);

        printf("Area (km): ");
        scanf("%f", &area);

        printf("PIB: ");
        scanf("%f", &pib);

        printf("Numero de pontos turisticos: ");
        scanf("%d", &pontosTuristicos);

        printf("\n");

        printf("\n");

    //Carta 2:
        printf("DIGITE OS DADOS DA SEGUNDA CARTA: \n");
        
        printf("Estado de (A-H): ");
        scanf(" %c", &estado2); // espaço antes do %c para ignorar o '\n'

        printf("Codigo da carta (ex: A01): ");
        scanf("%s", &codigo2);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", &nomeCidade2);

        printf("Populacao: ");
        scanf("%d", &populacao2);

        printf("Area (km): ");
        scanf("%f", &area2);

        printf("PIB: ");
        scanf("%f", &pib2);

        printf("Numero de pontos turisticos: ");
        scanf("%d", &pontosTuristicos2);

        printf("\n");

        printf("\nCarta 1 %d:\n");
        printf("Estado: %c\n",&estado);
        printf("Codigo: %s\n",&codigo);
        printf("Cidade: %s\n",&nomeCidade);
        printf("Populacao: %d\n",&populacao);
        printf("Area: %f km\n",&area);
        printf("PIB: %f\n",&pib);
        printf("Pontos Turisticos: %d\n",&pontosTuristicos);

        printf("\n");
        printf("\n");

        printf("\nCarta 2 %d:\n");
        printf("Estado: %c\n",&estado2);
        printf("Codigo: %s\n",&codigo2);
        printf("Cidade: %s\n",&nomeCidade2);
        printf("Populacao: %d\n",&populacao2);
        printf("Area: %f km\n",&area2);
        printf("PIB: %f\n",&pib2);
        printf("Pontos Turisticos: %d\n",&pontosTuristicos2);




    return 0;
}