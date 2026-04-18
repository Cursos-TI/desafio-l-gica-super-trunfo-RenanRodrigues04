#include <stdio.h>

int main()
{
    printf("*** Bem vindo ao Super Trunfo! ***\nPara iniciar, digite os dados da primeira carta:\n\n"); // Inicialização do programa, recepção ao usuário.
    
    // declarando as variáveis.
    char pais[50];
    int populacao, numpontoturistico;
    float area, pib;
    
    // iniciando a entrada do usuário para Carta 1 
    printf("Digite o nome do país escolhido:\n");
    scanf(" %s", &pais);
    
    printf("Digite (sem ponto ou vírgula) a quantidade de habitantes (população) do país:\n");
    scanf("%d", &populacao);
    
    printf("Digite a área do país em quilometros quadrados:\n");
    scanf("%f", &area);
    
    printf("Digite o PIB (Produto Interno Bruto) do país em bilhões de reais:\n");
    scanf("%f", &pib);
    
    printf("Digite a quantidade de pontos turísticos do país:\n");
    scanf("%d", &numpontoturistico);
    
    //Carta 2
    printf("\nAgora digite os dados da segunda carta: (lembre-se de não escolher o mesmo país da carta anterior).\n\n");
    
    //declarando as variáveis da segunda carta.
    char pais2[50];
    int populacao2, numpontoturistico2;
    float area2, pib2;
    
    printf("Digite o nome do país escolhido:\n");
    scanf(" %s", &pais2);
    
    printf("Digite (sem ponto ou vírgula) a quantidade de habitantes (população) do país:\n");
    scanf("%d", &populacao2);
    
    printf("Digite a área do país em quilometros quadrados:\n");
    scanf("%f", &area2);
    
    printf("Digite o PIB (Produto Interno Bruto) do país em bilhões de reais:\n");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos do país:\n");
    scanf("%d", &numpontoturistico2);

    // Cálculos da densidade
    float DensidadeP1, DensidadeP2;
    DensidadeP1 = (float) populacao / area;
    DensidadeP2 = (float) populacao2 / area2;

    // escolha dos atributos de comparação.
    int opcao, opcao2;

    printf("\nEscolha o primeiro atributo para comparar as cartas:\n");
    printf("1.População\n2.Área\n3.PIB\n4.Pontos turísticos\n5.Densidade\n");
    scanf("%d", &opcao);

    printf("\nEscolha o segundo atributo:\n");

    switch(opcao){ // usado para o usuario ser induzido a não escolher o mesmo atributo anterior.
        case 1: printf("2.Área\n3.PIB\n4.Pontos turísticos\n5.Densidade\n"); break;
        case 2: printf("1.População\n3.PIB\n4.Pontos turísticos\n5.Densidade\n"); break;
        case 3: printf("1.População\n2.Área\n4.Pontos turísticos\n5.Densidade\n"); break;
        case 4: printf("1.População\n2.Área\n3.PIB\n5.Densidade\n"); break;
        case 5: printf("1.População\n2.Área\n3.PIB\n4.Pontos turísticos\n"); break;
    }

    scanf("%d", &opcao2);

    //verificando a escolha do usuário.
    if(opcao == opcao2|| opcao <1 || opcao>5 || opcao2<1 || opcao2>5){
        printf("Erro: atributos iguais ou opção de escolha inválida.\n");
        return 0;
    }

    // Variáveis para calculo das comparações.
    float valor1_c1, valor1_c2; 
    float valor2_c1, valor2_c2;
    char nomeAtributo1[30], nomeAtributo2[30];

    // ATRIBUTO 1 - atribuindo os valores reais dos atributos escolhidos pelo usuário nas variáveis declaradas acima.
    switch(opcao){
        case 1: 
            valor1_c1 = populacao; valor1_c2 = populacao2;
            sprintf(nomeAtributo1, "População"); // colocando o texto na variavel, feito dessa forma, pois char não permite atribuir valor direto.
        break;
        case 2: 
            valor1_c1 = area; valor1_c2 = area2;
            sprintf(nomeAtributo1, "Área");
        break;
        case 3: 
            valor1_c1 = pib; valor1_c2 = pib2;
            sprintf(nomeAtributo1, "PIB");
        break;
        case 4: 
            valor1_c1 = numpontoturistico; valor1_c2 = numpontoturistico2;
            sprintf(nomeAtributo1, "Pontos Turísticos");
        break;
        case 5: 
            valor1_c1 = DensidadeP1; valor1_c2 = DensidadeP2;
            sprintf(nomeAtributo1, "Densidade Demográfica");
        break;
    }

    // ATRIBUTO 2
    switch(opcao2){
        case 1: 
            valor2_c1 = populacao; valor2_c2 = populacao2;
            sprintf(nomeAtributo2, "População");
        break;
        case 2: 
            valor2_c1 = area; valor2_c2 = area2;
            sprintf(nomeAtributo2, "Área");
        break;
        case 3: 
            valor2_c1 = pib; valor2_c2 = pib2;
            sprintf(nomeAtributo2, "PIB");
        break;
        case 4: 
            valor2_c1 = numpontoturistico; valor2_c2 = numpontoturistico2;
            sprintf(nomeAtributo2, "Pontos Turísticos");
        break;
        case 5: 
            valor2_c1 = DensidadeP1; valor2_c2 = DensidadeP2;
            sprintf(nomeAtributo2, "Densidade Demográfica");
        break;
    }

    // PONTUAÇÃO FINAL
    int pontos1 = 0;
    int pontos2 = 0;

    // COMPARAÇÃO 1 (usa vencedor1 logicamente) operador ternario usado para verificar se a comparação é densidade.
    int vencedor1 = (opcao == 5) ?
        (valor1_c1 < valor1_c2 ? 1 : 2) :
        (valor1_c1 > valor1_c2 ? 1 : 2);

    if(vencedor1 == 1) pontos1++; // acrescenta um ponto a variavel vencedora de acordo com o operador ternário.
    else pontos2++;

    // COMPARAÇÃO 2 (usa vencedor2 logicamente)
    int vencedor2 = (opcao2 == 5) ?
        (valor2_c1 < valor2_c2 ? 1 : 2) :
        (valor2_c1 > valor2_c2 ? 1 : 2);

    if(vencedor2 == 1) pontos1++;
    else pontos2++;


    //exibindo resultado final.
    printf("\n--- RESULTADO ---\n");
    printf("%s vs %s\n", pais, pais2);
    
    //mostra os valores do atributo escolhido em cada carta
    printf("\nValor do 1 atributo em cada carta:\n", opcao);
    printf("Carta 1: %.2f\n", valor1_c1);
    printf("Carta 2: %.2f\n", valor1_c2);
    
    printf("\nValor do 2 atributo em cada carta:\n", opcao2);
    printf("Carta 1: %.2f\n", valor2_c1);
    printf("Carta 2: %.2f\n", valor2_c2);
    
    //mostra pontuação.
    printf("\nPontos finais:\n");
    printf("%s: %d\n", pais, pontos1);
    printf("%s: %d\n", pais2, pontos2);
    
    //resultado final
    if(pontos1 > pontos2){
        printf("\n*** Vencedor final: %s ***\n", pais);
    }else if(pontos2 > pontos1){
        printf("\n*** Vencedor final: %s ***\n", pais2);
    }else{
        printf("\n*** Empate! ***\n");
    }
    
    return 0;
    
}
    
    