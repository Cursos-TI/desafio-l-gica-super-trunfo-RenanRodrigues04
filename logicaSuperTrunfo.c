#include <stdio.h>

int main()
{
    printf("*** Bem vindo ao Super Trunfo! ***\nPara iniciar, digite os dados da primeira carta:\n\n"); // Inicialização do programa, recepção ao usuário.
    
    // declarando as variáveis.
    char estado[3], codigodacarta[5], nomedacidade[50];
    int populacao, numpontoturistico;
    float area, pib;
    
    // iniciando a entrada do usuário e armazenamento dos dados da primeira carta.
    printf("Digite a UF que representa o estado escolhido:\n");
    scanf(" %s", &estado);// alterei a letra pela UF para que no final pudesse exibir a comparação como no exemplo do desafio e o tipo da variável para string para receber mais de um caracter.
    
    printf("Digite o código da carta com a UF do estado e o numero que representa a cidade entre 01 a 04 (ex: CE01):\n");
    scanf("%s", &codigodacarta);
    
    printf("Digite o nome da cidade de acordo com o código digitado anteriormente:\n");
    scanf(" %[^\n]", &nomedacidade);
    
    printf("Digite a quantidade de habitantes (população) da cidade:\n");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade em quilometros quadrados:\n");
    scanf("%f", &area);
    
    printf("Digite o PIB (Produto Interno Bruto) da cidade:\n");
    scanf("%f", &pib);
    
    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &numpontoturistico);
    
    //solicitando os dados da segunda carta.
    printf("\nAgora digite os dados da segunda carta: (lembre-se de não escolher a mesma cidade da carta anterior)\n\n");
    
    //declarando as variáveis da segunda carta. Utilizando os mesmos nomes, porém incluindo o '2' para indicar o pertencimento a segunda carta.
    char estado2[3], codigodacarta2[5], nomedacidade2[50];
    int populacao2, numpontoturistico2;
    float area2, pib2;
    
    //iniciando a entrada do usuário e armazenamento dos dados da segunda carta.
    printf("Digite a UF que representa o estado escolhido:\n");
    scanf(" %s", &estado2);// alterei a letra pela UF para que no final pudesse exibir a comparação como no exemplo do desafio e o tipo da variável para string para receber mais de um caracter.
    
    printf("Digite o código da carta com a UF do estado e o numero que representa a cidade entre 01 a 04 (ex: ES02):\n");
    scanf("%s", &codigodacarta2);
    
    printf("Digite o nome da cidade de acordo com o código digitado anteriormente:\n");
    scanf(" %[^\n]", &nomedacidade2);
    
    printf("Digite a quantidade de habitantes (população) da cidade:\n");
    scanf("%d", &populacao2);
    
    printf("Digite a área da cidade em quilometros quadrados:\n");
    scanf("%f", &area2);
    
    printf("Digite o PIB (Produto Interno Bruto) da cidade:\n");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &numpontoturistico2);
    
    //Calculando a Densidade Populacional e o Pib Per Capita das duas cartas. 
    
    float DensidadeP1, DensidadeP2, PibPerCap1, PibPerCap2;; // declarando as variáveis.
    
    /* Observações:
    Como o PIB foi informado em bilhões de reais, é necessário converter para reais (multiplicando por 1.000.000.000) antes de dividir pela população.
    Foi realizado a conversão explicita nos cálculos para garantir que os resultados estivessem no tipo float.
    */
    
    // primeira carta 
    DensidadeP1 = (float) populacao / area;
    PibPerCap1 = (float) (pib * 1000000000.0) / populacao; 
    
    // segunda carta
    DensidadeP2 = (float) populacao2 / area2;
    PibPerCap2 = (float) (pib2 * 1000000000.0) / populacao2;
     
    //iniciando a saída de dados para o usuário com as informações da primeira carta.
    printf("\nCartas escolhidas:\n\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigodacarta);
    printf("Cidade: %s\n", nomedacidade);
    printf("População da Cidade: %d habitantes\n", populacao);
    printf("Área da Cidade: %.2f km²\n", area);
    printf("PIB da Cidade: %.2f bilhões de reais\n", pib);
    printf("Números de pontos turísticos: %d\n", numpontoturistico);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadeP1);
    printf("PIB per Capita: %.2f reais\n\n", PibPerCap1);
    
    //saída de dados, informações da segunda carta.
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("População da Cidade: %d habitantes\n", populacao2);
    printf("Área da Cidade: %.2f km²\n", area2);
    printf("PIB da Cidade: %.2f bilhões de reais\n", pib2);
    printf("Números de pontos turísticos: %d\n", numpontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadeP2);
    printf("PIB per Capita: %.2f reais\n", PibPerCap2);
    
    //iniciando a comparação das cartas com a estrutura if-else.
    //Saída das informações
    printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (%s): %.2f hab/km²\n", nomedacidade, estado, DensidadeP1);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n", nomedacidade2, estado2, DensidadeP2);
    //comparação
    if (DensidadeP1 < DensidadeP2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nomedacidade);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n", nomedacidade2);
    }
    
    //iniciando a segunda comparação das cartas com a estrutura if-else.
    //Saída das informações
    printf("\nComparação de cartas (Atributo: PIB per capita):\n");
    printf("Carta 1 - %s (%s): %.2f reais\n", nomedacidade, estado, PibPerCap1);
    printf("Carta 2 - %s (%s): %.2f reais\n", nomedacidade2, estado2, PibPerCap2);
    //comparação 
    if (PibPerCap1 > PibPerCap2){
        printf("Resultado: Carta 1 (%s) venceu!", nomedacidade);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!", nomedacidade2);
    }
    
    return 0;
}