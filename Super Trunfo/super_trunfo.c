#include <stdio.h>

//Código Jogo Super Trunfo em C.
int main(){
    //Nome das variaveis usadas
    char Estado1 = 'A', Estado2 = 'B';
    char Codigo_Carta1[30] = "A-01", Codigo_Carta2[20] = "B-02", Cidade1[30], Cidade2[30];
    int População1, População2, Pontos_Turisticos1, Pontos_Turisticos2;
    float Area1, Area2, PIB1, PIB2;
        //Adquirindo a variavel Cidade1, Cidade2.
         printf("Digite o nome da primeira cidade: ");
            scanf("%s", &Cidade1);
         printf("Digite o nome da segunda cidade: ");
            scanf("%s", &Cidade2);

        //Adquirindo a variavel População1, População2.
         printf("Digite a população da primeira cidade: ");
            scanf("%d", &População1);
         printf("Digite a população da segunda cidade: ");
            scanf("%d", &População2);

        //Adquirindo a variavel Area1, Area2.
         printf("Digite a área da primeira cidade: ");
            scanf("%f", &Area1 );
         printf("Digete a área da segunda cidade: ");
            scanf("%f", &Area2);

        //Adquirindo a variavel PIB1, PIB2.
         printf("Digite o PIB da primeira cidade: ");
            scanf("%f", &PIB1);
         printf("Digite o PIB da segunda cidade: ");
            scanf("%f", &PIB2);

        //Adquirindo a variavel Pontos_Turisticos1, Pontos_Turisticos2.
         printf("Digite a quantidade de pontos turísticos da primeira cidade: ");
            scanf("%d", &Pontos_Turisticos1);
         printf("Digite a quantidade de pontos turísticos da segunda cidade: ");
            scanf("%d", &Pontos_Turisticos2);

        //Print Carta1
            printf("\nCarta 1:\n");
            printf("Estado: %c\n", Estado1);
            printf("Código: %s\n", Codigo_Carta1);
            printf("Nome da cidade: %s\n", Cidade1);
            printf("População: %d\n", População1);
            printf("Área: %.2f km²\n", Area1);
            printf("PIB: %.2f bilhões de reais\n", PIB1);
            printf("Número de pontos turísticos: %d\n", Pontos_Turisticos1);

        //Print Carta2
            printf("\nCarta 2:\n");
            printf("Estado: %c\n", Estado2);
            printf("Código: %s\n", Codigo_Carta2);
            printf("Nome da cidade: %s\n", Cidade2);
            printf("População: %d\n", População2);
            printf("Área: %.2f km²\n", Area2);
            printf("PIB: %.2f bilhões de reais\n", PIB2);
            printf("Número de pontos turísticos: %d\n", Pontos_Turisticos2);

return 0;}