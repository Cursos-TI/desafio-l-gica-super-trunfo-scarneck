#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    //---estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
    char es,es2;
    char cocid[50],cocid2[50];
    char name[50],name2[50];
    unsigned long int pop,pop2;
    int pt,pt2;
    float area,area2, pib,pib2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
   int f;
    printf("*** Super Trunfo ***\n\n");
    printf ("1 - Jogar\n");
    printf("2 - Sair\n");

    scanf("%d",&f);

    switch (f){
            case 1:

            //Primeira carta
            printf("\n** Primeira carta** \n\n");
            printf("Insira a letra do primeiro estado: \n");
            scanf(" %c" ,&es);

            printf("Insira o código da primeira cidade: \n");
            scanf(" %49s" ,cocid);

            printf("Insira o nome da primeira cidade: \n");
            scanf(" %49s" ,name);

            printf("Insira a população da primeira cidade: \n");
            scanf(" %lu" ,&pop);

            printf("Insira a área da primeira cidade: \n");
            scanf(" %f" ,&area);

            printf("Insira o pib da primeira cidade: \n");
            scanf(" %f" ,&pib );

            printf("Insira o número de pontos túristicos da primeira cidade: \n");
            scanf(" %i" ,&pt );

            printf("Primeira carta concluída.\n\n** Segunda Carta **\n");

            //Segunda Carta
            printf("Insira a letra do segundo estado: \n");
            scanf(" %c" ,&es2);
            printf("Insira o código da segunda cidade: \n");
            scanf(" %49s" ,cocid2);

            printf("Insira o nome da segunda cidade: \n");
            scanf(" %49s" ,name2);

            printf("Insira a população da segunda cidade: \n");
            scanf(" %lu" ,&pop2);

            printf("Insira a área da segunda cidade: \n");
            scanf(" %f" ,&area2);

            printf("Insira o pib da segunda cidade: \n");
            scanf(" %f" ,&pib2 );

            printf("Insira o número de pontos túristicos da segunda cidade: \n");
            scanf(" %i" ,&pt2 );

            // Definindo densidade populacional (dp) e PIB per capita (pibpc).

            float dp = (float) pop/area;
            float dp2 = (float) pop2/area2;

            float pibpc = (float) pib/pop;
            float pibpc2 = (float) pib2/pop2;

            //Super poder é a soma de todas as propriedades
            float SP = pop+pt+area+pib+pibpc+dp;
            float SP2 = pop2+pt2+area2+pib2+pibpc2+dp2;

            // Comparação de Cartas:
            // Desenvolva a lógica de comparação entre duas cartas.
            // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

                // Exibição dos Resultados:
            // Após realizar as comparações, exiba os resultados para o usuário.
            // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

            // Exemplo:
            // printf("A cidade vencedora é: %s\n");

            int opt;
            printf("\nEscolha o primeiro método de comparação\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - PIB per capita\n");
            printf("5 - Densidade populacional\n");
            printf("6 - Quantidade de pontos Turísticos\n");
            printf("7 - SuperPoder\n");

            scanf("%d",&opt);

            int opt2;
            printf("\nEscolha o segundo método de comparação\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - PIB per capita\n");
            printf("5 - Densidade populacional\n");
            printf("6 - Quantidade de pontos Turísticos\n");
            printf("7 - SuperPoder\n");

            scanf("%d",&opt2);

            printf("\n_________________________________\n");

            printf("Resultados: \n");
            switch (opt)
            {
            case 1:
                pop > pop2?
                printf("A cidade %s tem a maior população.\n",name):pop==pop2? printf("Houve um empate\n")
            :
                printf("A cidade %s tem a maior população.\n",name2);
            break;

            case 2:
                area > area2?
                printf("A cidade %s tem a maior área.\n",name):area==area2? printf("Houve um empate\n")
            :
                printf("A cidade %s tem a maior área.\n",name2);
            break;

            case 3:
                pib > pib2?
                printf("A cidade %s tem o maior PIB.\n",name):pib==pib2? printf("Houve um empate\n")
            :
                printf("A cidade %s tem o maior PIB\n",name2);
            break;

            case 4:
                pibpc > pibpc2?
                printf("A cidade %s tem o maior PIB per capita.\n",name):pibpc==pibpc2? printf("Houve um empate\n")
            :
                printf("A cidade %s tem o maior PIB per capita.\n",name2);
            break;

            case 5:
                dp < dp2?
                printf("A cidade %s tem a melhor densidade poulacional.\n",name):dp==dp2? printf("Houve um empate\n")
            :
                printf("A cidade %s tem a melhor densidade poulacional.\n",name2);
            break;

            case 6:
                pt > pt2?
                printf("A cidade %s tem mais pontos turísticos.\n",name):pt==pt2? printf("Houve um empate\n")
            :
                printf("A cidade %s tem mais pontos turísticos.\n",name2);
            break;

            case 7:
                SP > SP2?
                printf("A cidade %s tem o maior SuperPoder.\n",name):SP==SP2? printf("Houve um empate\n")
            :
                printf("A cidade %s tem o maior SuperPoder.\n",name2);
            break;

            default:
                printf("Algo inesperado ocorreu, tente novamente.\n");
                break;
            }


            // Segundo resultado:
            switch (opt2)
            {
            case 1:
                pop > pop2?
                printf("A cidade %s tem a maior população.\n",name)
            :
                pop==pop2? printf("Houve um empate\n"):printf("A cidade %s tem a maior população.\n",name2);
            break;

            case 2:
                area > area2?
                printf("A cidade %s tem a maior área.\n",name):area==area2? printf("Houve um empate\n")
            :
                printf("A cidade %s tem a maior área.\n",name2);
            break;

            case 3:
                pib > pib2?
                printf("A cidade %s tem o maior PIB.\n",name):pib==pib2? printf("Houve um empate\n")
            :
                printf("A cidade %s tem o maior PIB\n",name2);
            break;

            case 4:
                pibpc > pibpc2?
                printf("A cidade %s tem o maior PIB per capita.\n",name):pibpc==pibpc2? printf("Houve um empate\n")
            :
                printf("A cidade %s tem o maior PIB per capita.\n",name2);
            break;

            case 5:
                dp < dp2?
                printf("A cidade %s tem a melhor densidade poulacional.\n",name):dp==dp2? printf("Houve um empate\n")
            :
                printf("A cidade %s tem a melhor densidade poulacional.\n",name2);
            break;

            case 6:
                pt > pt2?
                printf("A cidade %s tem mais pontos turísticos.\n",name):pt==pt2? printf("Houve um empate\n")
            :
                printf("A cidade %s tem mais pontos turísticos.\n",name2);
            break;

            case 7:
                SP > SP2?
                printf("A cidade %s tem o maior SuperPoder.\n",name):SP==SP2? printf("Houve um empate\n")
            :
                printf("A cidade %s tem o maior SuperPoder.\n",name2);
            break;

            default:
                printf("Algo inesperado ocorreu, tente novamente.\n");
            break;
            }
            break;
        
        case 2:
            printf("Saindo...\n");
            break;

        default:
            printf("Tecla não associada, tente novamente.\n");
            break;
    }


    return 0;
}