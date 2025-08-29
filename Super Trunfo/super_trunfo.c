#include <stdio.h>

//Código Jogo Super Trunfo em C.
int main(){
   
    //Nome das variaveis usadas
    char Estado1 = 'A', Estado2 = 'B';
    char Codigo_Carta1[30] = "A-01", Codigo_Carta2[20] = "B-02", Cidade1[30], Cidade2[30];
    int Pontos_Turisticos1, Pontos_Turisticos2;
    unsigned long int População1, População2;
    float Area1, Area2, PIB1, PIB2, Densidade1, Densidade2, PIB_Capita1, PIB_Capita2, SuperPoder1, SuperPoder2;

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

               //Faz População1 / Area1 e obtêm o valor de Densidade1.
               Densidade1 = (float)(População1 / Area1);

               //Faz População2 / Area2 e obtêm o valor de Densidade2.
               Densidade2 = (float)(População2 / Area2);

               //Faz PIB1 / População1 e obtêm o valor de Densidade1.
               PIB_Capita1 = (float)(População1 / PIB1);

               //Faz PIB2 / População2 e obtêm o valor de Densidade2.
               PIB_Capita2 = (float)(População2 / PIB2);
                     
                  //Calculando o SuperPoder Carta 1.
                  SuperPoder1 = (float)(População1 + Area1 + PIB1 + Pontos_Turisticos1 + PIB_Capita1 + (Area1 / População1));

                  //Calculando o SuperPoder Carta 2.
                  SuperPoder2 = (float)(População2 + Area2 + PIB2 + Pontos_Turisticos2 + PIB_Capita2 + (Area2 / População2));

            //Exibe a Carta1.
            printf("\nCarta 1:\n");
            printf("Estado: %c\n", Estado1);
            printf("Código: %s\n", Codigo_Carta1);
            printf("Nome da cidade: %s\n", Cidade1);
            printf("População: %d\n", População1);
            printf("Área: %.2f km²\n", Area1);
            printf("PIB: %.2f bilhões de reais\n", PIB1);
            printf("Número de pontos turísticos: %d\n", Pontos_Turisticos1);
            printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
            printf("PIB per Capita: %.2f reais\n", PIB_Capita1);
            printf("Nível do Super Poder: %.2f\n", SuperPoder1);
        
            //Exibe a Carta2.
            printf("\nCarta 2:\n");
            printf("Estado: %c\n", Estado2);
            printf("Código: %s\n", Codigo_Carta2);
            printf("Nome da cidade: %s\n", Cidade2);
            printf("População: %d\n", População2);
            printf("Área: %.2f km²\n", Area2);
            printf("PIB: %.2f bilhões de reais\n", PIB2);
            printf("Número de pontos turísticos: %d\n", Pontos_Turisticos2);
            printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
            printf("PIB per Capita: %.2f reais\n", PIB_Capita2);
            printf("Nível do Super Poder: %.2f\n", SuperPoder2);

               //Comparação de cartas e apresentação do placar.
               printf("\n*-* PLACAR *-*\n");
                           printf("População: ");
               if (População1 > População2)
                  printf("Carta 1 venceu (1)\n");
               else
                  printf("Carta 2 venceu (0)\n");
                           printf("Área: ");
               if (Area1 > Area2)
                  printf("Carta 1 venceu (1)\n");
               else 
                  printf("Carta 2 venceu (0)\n");
                           printf("PIB: ");
               if (PIB1 > PIB2)
                  printf("Carta 1 venceu (1)\n");
               else
                  printf("Carta 2 venceu (0)\n");
                           printf("Pontos Turísticos: ");
               if (Pontos_Turisticos1 > Pontos_Turisticos2)
                  printf("Carta 1 venceu (1)\n");
               else 
                  printf("Carta 2 venceu (0)\n");
                           printf("Densidade Populacional: ");
               if (Densidade1 < Densidade2)
                  printf("Carta 1 venceu (1)\n");
               else
                  printf("Carta 2 venceu (0)\n");
                           printf("PIB per Capita: ");
               if (PIB_Capita1 > PIB_Capita2)
                  printf("Carta 1 venceu (1)\n");
               else 
                  printf("Carta 2 venceu (0)\n");
                           printf("Super Poder: ");
               if (SuperPoder1 > SuperPoder2)
                  printf("Carta 1 venceu (1)\n");
               else 
                  printf("Carta 2 venceu (0)\n");
return 0;}