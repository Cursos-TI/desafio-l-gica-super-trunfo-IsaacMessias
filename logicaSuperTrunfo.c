#include <stdio.h>

int main() {
    //Colocado na ordem de aparição da carta.
    //Por hora, chamarei as variantes por ordem 1 e 2.
    char letra1 = 'A', letra2 = 'B';
    char codigo1[5] = "A01", codigo2[5] = "B02";
    char cidade1[50] = "São paulo", cidade2[50] = "Rio de janeiro";
    float populacao1 = 11.9, populacao2 = 16.05;
    float area1 = 1521 , area2 = 1200;
    float pib1 = 3.5 , pib2 = 1.3;
    int pontos1 = 36, pontos2 = 48;
    
    float densidade1, densidade2, pibpc1, pibpc2;
    
//solicitados todos os valores da primeira carta, igual para a segunda:
     //declarei as informações de cada carta junto

    printf("* Bem vindo ao cadastro de cartas do SUPER TRUNFO! *\n");
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

        //apresentação das duas cartas.
        printf("Cadastro concluido, as cartas são: \n");
        printf("--------------------------\n");
        printf("Carta 1:\n"
                "Estado: %c\n "
                "Codigo da carta: %s \n"
                "Nome da cidade: %s \n"
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
                "Codigo da carta: %s \n"
                "Nome da cidade: %s \n"
                "População: %.2f\n"
                "Area: %.2f \n"
                "PIB: %.2f \n"
                "Numero de pontos turisticos: %d \n"
                "Densidade populacional: %.2f\n"
                "PIB per capita: %.2f\n"
                "Super poder: %.2f\n",
                letra2, codigo2, cidade2, populacao2, area2, pib2, pontos2, densidade2, pibpc2, superpoder2);
//utilizei apenas 1 comando por carta

printf("--------------------------\n");
printf("Os vencedores são:");

if(populacao1 > populacao2){
    printf("O vencedor em população foi %s, Carta %s\n", cidade1, codigo1);
}else{
    printf("O vencedor em população foi %s, Carta %s\n", cidade2, codigo2);
}

if(area1 > area2){
    printf("O vencedor em Area foi %s, Carta %s\n", cidade1, codigo1);
}else{
    printf("O vencedor em Area foi %s, Carta %s\n", cidade2, codigo2);
}

if(pib1 > pib2){
    printf("O vencedor em PIB foi %s, Carta %s\n", cidade1, codigo1);
}else{
    printf("O vencedor em PIB foi %s, Carta %s\n", cidade2, codigo2);
}

if(pontos1 > pontos2){
    printf("O vencedor em pontos turisticos foi %s, Carta %s\n", cidade1, codigo1);       
}else{
    printf("O vencedor em pontos turisticos foi %s, Carta %s\n ", cidade2, codigo2);
}

if(densidade1 < densidade2){
    printf("O vencedor em densidade polulacional foi %s, Carta %s\n", cidade1, codigo1);
}else{
    printf("O vencedor em densidade polulacional foi %s, Carta %s\n", cidade2, codigo2);
}

if(pibpc1 > pibpc2){
    printf("O vencedor em PIB per capita foi %s, Carta %s\n", cidade1, codigo1);
}else{
    printf("O vencedor em PIB per capita foi %s, Carta %s\n", cidade2, codigo2);
}

if(superpoder1 > superpoder2){
    printf("O vencedor em Super poder foi %s, Carta %s\n", cidade1, codigo1);
}else{
    printf("O vencedor em Super poder foi %s, Carta %s\n", cidade2, codigo2);
}

printf("--------------------------\n");
printf("Espero que tenha gostado!!!\n""Obrigado.\n");



return 0;
}