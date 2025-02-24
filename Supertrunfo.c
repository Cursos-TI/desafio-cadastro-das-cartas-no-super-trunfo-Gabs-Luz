#include <stdio.h>
int main(){
    //variáveis
    char Estado, Estado2;
    char Codecard[10], Nomecidade[50], Codecard2[10], Nomecidade2[50];
    int Pontos_Turisticos, Populacao, Pontos_Turist2, Populacao2;
    float PIB, Area, densidade_popu, Percapita, PIB2, Area2, densidade_po2, Percapita2, SuperCarta1, SuperCarta2;

    //Entrada de dados
    //CARTA 1
    printf("*** Digite as informações da carta 1 ***\n");

    printf("Digite uma letra de 'A' a 'H': \n");
    scanf(" %c", &Estado); // espaço entre o %c para evitar problemas no buffer

    printf("Digite o código da carta: \n");
    scanf("%s", &Codecard);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &Nomecidade); //Com scanf(" %[^\n]", Nomecidade);, ele armazenará "Rio de Janeiro" corretamente.

    printf("Digite a Área da cidade em km²: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Quantidade de habitantes da cidade: \n");
    scanf("%d", &Populacao);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &Pontos_Turisticos);

    //CARTA 2
    printf("*** Digite as informações da carta 2 ***\n");

    printf("Digite uma letra de 'A' a 'H': \n");
    scanf(" %c", &Estado2); // espaço entre o %c para evitar problemas no buffer

    printf("Digite o código da carta: \n");
    scanf("%s", &Codecard2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &Nomecidade2); 

    printf("Digite a Área da cidade em km²: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Quantidade de habitantes da cidade: \n");
    scanf("%d", &Populacao2);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &Pontos_Turist2);

    //Adição do Nível Aventureiro
    //CARTA 1
   densidade_popu = (Populacao / Area);
   Percapita = ( PIB / (float) Populacao);
   //CARTA 2
   densidade_po2 = (Populacao2 / Area2);
   Percapita2 = (PIB2 / (float) Populacao2);

    //Adição Nível Mestre / Super poder das cartas 
    SuperCarta1 = (int)(Area + Populacao + Pontos_Turisticos + PIB + Percapita + (1.0/densidade_popu));

    SuperCarta2 = (int)(Area2 + Populacao2 + Pontos_Turist2 + PIB2 + Percapita2 + (1.0/densidade_po2));
 

    //Exibição de dados
    //CARTA 1
    printf("*** Carta 1 ***\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codecard);
    printf("Nome cidade: %s\n", Nomecidade);
    printf("Área: %.2f Km²\n", Area);
    printf("PIB: %.2f bihões de reais\n", PIB);
    printf("População: %d\n", Populacao);
    printf("Pontos Turísticos: %d\n", Pontos_Turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_popu);
    printf("PIB per Capita: %.2f reais\n", Percapita);

    //CARTA 2
    printf("*** Carta 2 ***\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codecard2);
    printf("Nome cidade: %s\n", Nomecidade2);
    printf("Área: %.2f Km²\n", Area2);
    printf("PIB: %.2f bihões de reais\n", PIB2);
    printf("População: %d\n", Populacao2);
    printf("Pontos Turísticos: %d\n", Pontos_Turist2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_po2);
    printf("PIB per Capita: %.2f reais\n", Percapita2);
    

    //Comparação de Cartas // Nível Mestre
    // Se o resultado da comparação for (1) Carta 1 ganhou
    // Se o resultado da comparação for (0) Carta 2 ganhou
    printf("Comparação das Cartas: \n");
    printf("População: %d\n", Populacao > Populacao2);
    printf("Área: %d\n", Area > Area2);
    printf("PIB: %d\n", PIB > PIB2);
    printf("Pontos Turísticos: %d\n", Pontos_Turisticos > Pontos_Turist2);
    printf("Densidade Populacional: %d\n", densidade_popu < densidade_po2); // Menor densidade vence
    printf("PIB per Capita: %d\n", Percapita > Percapita2);
    printf("Super Poder: %d\n", SuperCarta1 > SuperCarta2);

 
    return 0;
}