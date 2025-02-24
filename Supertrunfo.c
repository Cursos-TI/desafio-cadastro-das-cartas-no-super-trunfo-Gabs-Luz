#include <stdio.h>
int main(){
    //variáveis
    char Estado;
    char Codecard[4], Nomecidade[50];
    int Pontos_Turisticos, Populacao;
    float PIB, Area;

    //Entrada de dados
    printf("*** Digite as informações da carta ***\n");

    printf("Digite uma letra de 'A' a 'H': \n");
    scanf("%c", &Estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &Codecard);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Nomecidade);

    //Exibição de dados
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codecard);
    printf("Nome cidade: %s\n", Nomecidade);

    return 0;
}