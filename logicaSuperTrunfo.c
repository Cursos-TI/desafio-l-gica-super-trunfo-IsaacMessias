#include <stdio.h>

int main() {
    //Colocado na ordem de aparição da carta.
    //Por hora, chamarei as variantes por ordem 1 e 2.
    char letra1 = 'A', letra2 = 'B';
    char codigo1[5] = "A01", codigo2[5] = "B02";
    char cidade1[50] = "São paulo", cidade2[50] = "Rio de janeiro";
    float populacao1 = 16.7, populacao2 = 12;
    float area1 = 1500 , area2 = 1700;
    float pib1 = 4 , pib2 = 1.3;
    int pontos1 = 36, pontos2 = 48;
    
    float densidade1, densidade2, pibpc1, pibpc2;
     
//solicitados todos os valores da primeira carta, igual para a segunda:
     //declarei as informações de cada carta junto

    printf("* Bem vindo ao nosso SUPER TRUNFO! *\n");
    //printf("Vamos cadastrar suas cartas!\n");    
    //printf("Para o cadastro das suas cartas. por favor, insira as informações do estado, e cidade escolhidos.\n");
    //printf("Após inserir as infomações, pressione enter:\n");
    
   /* printf("Insira uma letra entre A e H correspondente ao estado: \n");
    scanf(" %c", &letra1);

    printf("Insira o codigo da carta, equivale a letra + 01: \n");
    scanf(" %s", &codigo1);
    
    printf("Insira o nome da cidade:\n");
    scanf(" %[^\n]", cidade1);

    printf("Insira a população da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Insira a area da cidade em Km2: \n");
    scanf(" %f", &area1);

    printf("Insira o pib aproximado da cidade em bilhões: \n");
    scanf(" %f", &pib1);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf(" %d", &pontos1);*/

    densidade1 = (float) populacao1 / area1;
    pibpc1 = (float) (pib1 / populacao1) ;
    float superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibpc1 + (1 / densidade1);

/*printf("Cadastro concluido, vamos para o proximo.\n");
    
    printf("Insira uma letra, entre A e H correspondente ao estado: \n");
    scanf(" %c", &letra2);

    printf("Insira o codigo da carta, equivale a letra + 02: \n");
    scanf(" %s", &codigo2);

    printf("Insira o nome da cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("Insira a população da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Insira a população da cidade em Km2: \n");
    scanf(" %f", &area2);

    printf("Insira o pib aproximado da cidade em bilhões: \n");
    scanf(" %f", &pib2);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf(" %d", &pontos2);*/
    
    densidade2 = (float) populacao2 / area2;
    pibpc2 = (float) (pib2 / populacao2);
    float superpoder2 = (float) populacao2 + area2 + pib2 + pontos2 + pibpc2 + (1 / densidade2);


        printf("--------------------------\n");
        printf("Carta 1:\n"
                "Estado: %c\n "
                "Codigo da carta: %s\n"
                "Nome da cidade: %s\n"
                "População: %.2f\n"
                "Area: %.2f \n"
                "PIB: %.2f \n"
                "Numero de pontos turisticos: %d \n"
                "Densidade populacional: %.2f\n"
                "PIB per capita: %.2f\n"
                "Super poder: %.2f\n",
                letra1, codigo1, cidade1, populacao1, area1, pib1, pontos1, densidade1, pibpc1, superpoder1);
        
        printf("--------------------------\n");
        printf("Carta 2:\n"
                "Estado: %c\n "
                "Codigo da carta: %s\n"
                "Nome da cidade: %s\n"
                "População: %.2f\n"
                "Area: %.2f\n"
                "PIB: %.2f\n"
                "Numero de pontos turisticos: %d \n"
                "Densidade populacional: %.2f\n"
                "PIB per capita: %.2f\n"
                "Super poder: %.2f\n",
                letra2, codigo2, cidade2, populacao2, area2, pib2, pontos2, densidade2, pibpc2, superpoder2);
//utilizei apenas 1 comando por carta

printf("--------------------------\n");

int opcao1, opcao2, opcao3;
int resultado1, resultado2, resultado3;

printf("Agora, selecione o primeiro atributo que quer comparar, quem vencer 2 dispudas, ganha:\n");
printf("Para o resultado em população, digite 1\n");
printf("Para o resultado em área, digite 2\n");
printf("Para o resultado em PIB, digite 3\n");
printf("Para o resultado em quantidade de pontos turisticos, digite 4\n");
printf("Para o resultado em densidade populacional, digite 5\n");
printf("Para o resultado em PIB per capita, digite 6\n");
printf("Para o resultado em SUPER PODER!!, digite 7\n");
printf("Sua escolha:");
scanf("%d", &opcao1);

switch(opcao1){

    case 1:
        resultado1 = populacao1 > populacao2 ? 1 : 0;
            printf("Atributo 1, População, selecionado\n");
    break;

    case 2:
        resultado1 = area1 > area2 ? 1 : 0;
           printf("Atributo 1, Área, selecionado\n");
        
    break;
    
    case 3:
        resultado1 = pib1 > pib2 ? 1 : 0;
            printf("Atributo 1, PIB, selecionado\n");    
        
    break;

    case 4:
        resultado1 = pontos1 > pontos2 ? 1 : 0;
            printf("Atributo 1, Pontos turisticos, selecionado\n"); 
    break;

    case 5:
        resultado1 = densidade1 < densidade2 ? 1 : 0;
            printf("Atributo 1, Densidade, selecionado\n");  
    break;
    
    case 6:
        resultado1 = pibpc1 > pibpc2 ? 1 : 0;
            printf("Atributo 1,PIB per capita, selecionado\n ");
    break;

    case 7:
        resultado1 = superpoder1 > superpoder2 ? 1 : 0;
            printf("Atributo 1,Super poder, selecionado\n ");
    break;

    default:
        printf("Seleção invalida\n");
    break;
}

printf("--------------------------\n");
printf("Agora, selecione um atributo diferente do primeiro para comparar:\n");
printf("Para o resultado em população, digite 1\n");
printf("Para o resultado em área, digite 2\n");
printf("Para o resultado em PIB, digite 3\n");
printf("Para o resultado em quantidade de pontos turisticos, digite 4\n");
printf("Para o resultado em densidade populacional, digite 5\n");
printf("Para o resultado em PIB per capita, digite 6\n");
printf("Para o resultado em SUPER PODER!!, digite 7\n");
printf("Sua escolha:");
scanf("%d", &opcao2);


if (opcao1 == opcao2){
    printf("Escolha um atributo diferente.\n");

}else{ switch(opcao2){

    case 1:
        resultado2 = populacao1 > populacao2 ? 1 : 0;
            printf("Atributo 2, População, selecionado\n");
    break;

    case 2:
        resultado2 = area1 > area2 ? 1 : 0;
           printf("Atributo 2, Área, selecionado\n");
        
    break;
    
    case 3:
        resultado2 = pib1 > pib2 ? 1 : 0;
            printf("Atributo 2, PIB, selecionado\n");    
        
    break;

    case 4:
        resultado2 = pontos1 > pontos2 ? 1 : 0;
            printf("Atributo 2, Pontos turisticos, selecionado\n"); 
    break;

    case 5:
        resultado2 = densidade1 < densidade2 ? 1 : 0;
            printf("Atributo 2, Densidade, selecionado\n");  
    break;
    
    case 6:
        resultado2 = pibpc1 > pibpc2 ? 1 : 0;
            printf("Atributo 2, PIB per capita, selecionado\n ");
    break;

    case 7:
        resultado2 = superpoder1 > superpoder2 ? 1 : 0;
            printf("Atributo 2, Super poder, selecionado\n ");
    break;

    default:
        printf("Seleção invalida\n");
    break;
}}

printf("--------------------------\n");
printf("Agora, selecione um atributo diferente do primeiro e do segundo para comparar:\n");
printf("Para o resultado em população, digite 1\n");
printf("Para o resultado em área, digite 2\n");
printf("Para o resultado em PIB, digite 3\n");
printf("Para o resultado em quantidade de pontos turisticos, digite 4\n");
printf("Para o resultado em densidade populacional, digite 5\n");
printf("Para o resultado em PIB per capita, digite 6\n");
printf("Para o resultado em SUPER PODER!!, digite 7\n");
printf("Sua escolha:");
scanf("%d", &opcao3);


if ((opcao1 == opcao3) || (opcao3 == opcao2)){
    printf("Escolha um atributo diferente.\n");

}else{ switch(opcao3){

    case 1:
        resultado3 = populacao1 > populacao2 ? 1 : 0;
            printf("Atributo 2, População, selecionado\n");
    break;

    case 2:
        resultado3 = area1 > area2 ? 1 : 0;
           printf("Atributo 2, Área, selecionado\n");
        
    break;
    
    case 3:
        resultado3 = pib1 > pib2 ? 1 : 0;
            printf("Atributo 2, PIB, selecionado\n");    
        
    break;

    case 4:
        resultado3 = pontos1 > pontos2 ? 1 : 0;
            printf("Atributo 2, Pontos turisticos, selecionado\n"); 
    break;

    case 5:
        resultado3 = densidade1 < densidade2 ? 1 : 0;
            printf("Atributo 2, Densidade, selecionado\n");  
    break;
    
    case 6:
        resultado3 = pibpc1 > pibpc2 ? 1 : 0;
            printf("Atributo 2, PIB per capita, selecionado\n ");
    break;

    case 7:
        resultado3 = superpoder1 > superpoder2 ? 1 : 0;
            printf("Atributo 2, Super poder, selecionado\n ");
    break;

    default:
        printf("Seleção invalida\n");
    break;}
}


if((resultado1 + resultado2 + resultado3) >= 2)
{
    printf("Parabens, a carta %s venceu!!!\n", codigo1 );

}else{
    printf("Voce perdeu, o vencedor foi a carta %s\n", codigo2);
}


printf("--------------------------\n");
printf("Espero que tenha gostado!!!\n""Obrigado.\n");



return 0;
}