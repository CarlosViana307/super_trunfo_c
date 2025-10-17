#include <stdio.h>

int main() {

    //Variaveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int pop1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;

    //Variaveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int pop2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;

    //Pedindo dados da Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Digite o Estado (uma letra): ");
    scanf(" %c", &estado1); //Le a letra do estado

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1); //Le o codigo da carta

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", cidade1); //Le o nome da cidade, permitindo espacos

    printf("Digite a Populacao: ");
    scanf("%d", &pop1); //Le a populacao

    printf("Digite a Area (em km2): ");
    scanf("%f", &area1); //Le a area

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1); //Le o PIB

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);// Le a quantidade de pontos turisticos

    //Pedindo dados da Carta
    printf("\nCadastro da Carta 2\n");

    printf("Digite o Estado (uma letra): ");
    scanf(" %c", &estado2); //Le a letra do estado

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2); //Le o codigo da carta

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2); //Le o nome da cidade

    printf("Digite a Populacao: ");
    scanf("%d", &pop2); //Le a populacao

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2); //Le a area

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2); //Le o PIB

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2); //Le a quantidade de pontos turisticos

    //ETAPA DE CALCULOS
    //Calcula as novas propriedades para a Carta 1
    densidade1 = pop1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / pop1;

    //Calcula as novas propriedades para a Carta 2
    densidade2 = pop2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / pop2;

    //Mostrando os dados cadastrados
    printf("\n\nCartas Cadastradas\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", pop1);
    printf("Area: %.2f km2\n", area1); //Mostra a area com 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1); //Mostra o PIB com 2 casas decimais
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", pop2);
    printf("Area: %.2f km2\n", area2); //Mostra a area com 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib2); //Mostra o PIB com 2 casas decimais
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0; //Fim do programa
}