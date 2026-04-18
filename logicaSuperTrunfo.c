#include <stdio.h>

int main()
{
    printf("*** Bem vindo ao Super Trunfo! ***\nPara iniciar, digite os dados da primeira carta:\n\n"); // Inicialização do programa, recepção ao usuário.
    
    // declarando as variáveis.
    char pais[50];
    int populacao, numpontoturistico;
    float area, pib;
    
    // iniciando a entrada do usuário e armazenamento dos dados da primeira carta.
    printf("Digite o nome do país escolhido:\n");
    scanf(" %s", &pais);
    
    printf("Digite a quantidade de habitantes (população) do país:\n");
    scanf("%d", &populacao);
    
    printf("Digite a área do país em quilometros quadrados:\n");
    scanf("%f", &area);
    
    printf("Digite o PIB (Produto Interno Bruto) do país em bilhões de reais:\n");
    scanf("%f", &pib);
    
    printf("Digite a quantidade de pontos turísticos do país:\n");
    scanf("%d", &numpontoturistico);
    
    //solicitando os dados da segunda carta.
    printf("\nAgora digite os dados da segunda carta: (lembre-se de não escolher o mesmo país da carta anterior).\n\n");
    
    //declarando as variáveis da segunda carta. Utilizando os mesmos nomes, porém incluindo o '2' para indicar o pertencimento a segunda carta.
    char pais2[50];
    int populacao2, numpontoturistico2;
    float area2, pib2;
    
    //iniciando a entrada do usuário e armazenamento dos dados da segunda carta.
    printf("Digite o nome do país escolhido:\n");
    scanf(" %s", &pais2);
    
    printf("Digite a quantidade de habitantes (população) do país:\n");
    scanf("%d", &populacao2);
    
    printf("Digite a área do país em quilometros quadrados:\n");
    scanf("%f", &area2);
    
    printf("Digite o PIB (Produto Interno Bruto) do país em bilhões de reais:\n");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos do país:\n");
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
    //Essa parte foi comentada, pois eu não compreendi, se era pra manter a exibição das informações ou somente mostrar a comparação.
    /*
    printf("\nCartas escolhidas:\n\n");
    printf("Carta 1:\n");
    printf("País: %s\n", pais);
    printf("População do País: %d habitantes\n", populacao);
    printf("Área do País: %.2f km²\n", area);
    printf("PIB do País: %.2f bilhões de reais\n", pib);
    printf("Números de pontos turísticos: %d\n", numpontoturistico);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadeP1);
    printf("PIB per Capita: %.2f reais\n\n", PibPerCap1);
    
    //saída de dados, informações da segunda carta.
    printf("Carta 2:\n");
    printf("País: %s\n", pais2);
    printf("População do País: %d habitantes\n", populacao2);
    printf("Área do País: %.2f km²\n", area2);
    printf("PIB do País: %.2f bilhões de reais\n", pib2);
    printf("Números de pontos turísticos: %d\n", numpontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadeP2);
    printf("PIB per Capita: %.2f reais\n\n", PibPerCap2); */
    
    //iniciando a comparação das cartas.
    
    int opcao; //declarando uma variável que irá receber a resposta do usuário.
    
    printf("\n\nEscolha um atributo para fazer a comparação das cartas:\n\n"); //solicitando o atributo.
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de pontos turísticos.\n");
    printf("5. Densidade Demográfica.\n");
    scanf("%d", &opcao);
    
    //Parte lógica com estrutura de decisão, utilizando switch, que verifica a resposta do usuário e realiza o código de acordo com o case equivalente, que está estruturado com if - if else.
    switch(opcao){
        case 1:
            if(populacao > populacao2){
                printf("\n*** Comparação das Cartas ***\n\n"); //iniciando a exibição.
                printf("%s vs %s\n", pais, pais2); //mostrando os países escolhidos.
                printf("Atributo escolhido: População.\n");
                printf("População da Carta 1: %d habitantes\n", populacao);
                printf("Populacao da Carta 2: %d habitantes\n", populacao2);
                printf("### A carta 1, venceu!###\n");
            }else if(populacao < populacao2){
                printf("\n*** Comparação das Cartas ***\n\n"); 
                printf("%s vs %s\n", pais, pais2); 
                printf("Atributo escolhido: População.\n");
                printf("População da Carta 1: %d habitantes\n", populacao);
                printf("Populacao da Carta 2: %d habitantes\n", populacao2);
                printf("### A carta 2, venceu! ###\n");
            }else{
                printf("\n*** Comparação das Cartas ***\n\n");
                printf("%s vs %s\n", pais, pais2); 
                printf("Atributo escolhido: População.\n");
                printf("População da Carta 1: %d habitantes\n", populacao);
                printf("Populacao da Carta 2: %d habitantes\n", populacao2);
                printf("### Empatou! ###\n"); 
            } 
        break;
        
        case 2:
            if(area > area2){
                printf("\n*** Comparação das Cartas ***\n\n");
                printf("%s vs %s\n", pais, pais2);
                printf("Atributo escolhido: Área.\n");
                printf("Área da Carta 1: %.2f km²\n", area);
                printf("Área da Carta 2: %.2f km²\n", area2);
                printf("### A carta 1, venceu! ###\n");
            }else if(area < area2){
                printf("\n*** Comparação das Cartas ***\n\n");
                printf("%s vs %s\n", pais, pais2);
                printf("Atributo escolhido: Área.\n");
                printf("Área da Carta 1: %.2f km²\n", area);
                printf("Área da Carta 2: %.2f km²\n", area2);
                printf("### A carta 2, venceu! ###\n");
            }else{
                printf("\n*** Comparação das Cartas ***\n\n");
                printf("%s vs %s\n", pais, pais2);
                printf("Atributo escolhido: Área.\n");
                printf("Área da Carta 1: %.2f km²\n", area);
                printf("Área da Carta 2: %.2f km²\n", area2);
                printf("### Empatou! ###\n"); 
            }
        break;
        
        case 3:
            if(pib > pib2){
                printf("\n*** Comparação das Cartas ***\n\n");
                printf("%s vs %s\n", pais, pais2);
                printf("Atributo escolhido: PIB.\n");
                printf("PIB da Carta 1: %.2f bilhões de reais\n", pib);
                printf("PIB da Carta 2: %.2f bilhões de reais\n", pib2);
                printf("### A carta 1, venceu! ###\n");
            }else if(pib < pib2){
                printf("\n*** Comparação das Cartas ***\n\n");
                printf("%s vs %s\n", pais, pais2);
                printf("Atributo escolhido: PIB.\n");
                printf("PIB da Carta 1: %.2f bilhões de reais\n", pib);
                printf("PIB da Carta 2: %.2f bilhões de reais\n", pib2);
                printf("### A carta 2, venceu! ###\n");
            }else{
                printf("\n*** Comparação das Cartas ***\n\n");
                printf("%s vs %s\n", pais, pais2);
                printf("Atributo escolhido: PIB.\n");
                printf("PIB da Carta 1: %.2f bilhões de reais\n", pib);
                printf("PIB da Carta 2: %.2f bilhões de reais\n", pib2);
                printf("### Empatou! ###\n");
            }
        break;
        
        case 4: 
            if(numpontoturistico > numpontoturistico2){
                printf("\n*** Comparação das Cartas ***\n\n");
                printf("%s vs %s\n", pais, pais2);
                printf("Atributo escolhido: Número de pontos turísticos.\n");
                printf("Pontos turísticos da Carta 1: %d\n", numpontoturistico);
                printf("Pontos turísticos da Carta 2: %d\n", numpontoturistico2);
                printf("### A carta 1, venceu! ###\n");
            }else if(numpontoturistico < numpontoturistico2){
                printf("\n*** Comparação das Cartas ***\n\n");
                printf("%s vs %s\n", pais, pais2);
                printf("Atributo escolhido: Número de pontos turísticos.\n");
                printf("Pontos turísticos da Carta 1: %d\n", numpontoturistico);
                printf("Pontos turísticos da Carta 2: %d\n", numpontoturistico2);
                printf("### A carta 2, venceu! ###\n");
            }else{
                printf("\n*** Comparação das Cartas ***\n\n");
                printf("%s vs %s\n", pais, pais2);
                printf("Atributo escolhido: Número de pontos turísticos.\n");
                printf("Pontos turísticos da Carta 1: %d\n", numpontoturistico);
                printf("Pontos turísticos da Carta 2: %d\n", numpontoturistico2);
                printf("### Empatou! ###\n");
            }
        break;
        
        case 5:
            if(DensidadeP1 < DensidadeP2){
                printf("\n*** Comparação das Cartas ***\n\n");
                printf("%s vs %s\n", pais, pais2);
                printf("Atributo escolhido: Densidade Demográfica.\n");
                printf("Densidade Demográfica da Carta 1: %.2f hab/km²\n", DensidadeP1);
                printf("Densidade Demográfica da Carta 2: %.2f hab/km²\n", DensidadeP2);
                printf("### A carta 1, venceu! ###\n");
            }else if(DensidadeP1 > DensidadeP2){
                printf("\n*** Comparação das Cartas ***\n\n");
                printf("%s vs %s\n", pais, pais2);
                printf("Atributo escolhido: Densidade Demográfica.\n");
                printf("Densidade Demográfica da Carta 1: %.2f hab/km²\n", DensidadeP1);
                printf("Densidade Demográfica da Carta 2: %.2f hab/km²\n", DensidadeP2);
                printf("### A carta 2, venceu! ###\n");
            }else{
                printf("\n*** Comparação das Cartas ***\n\n");
                printf("%s vs %s\n", pais, pais2);
                printf("Atributo escolhido: Densidade Demográfica.\n");
                printf("Densidade Demográfica da Carta 1: %.2f hab/km²\n", DensidadeP1);
                printf("Densidade Demográfica da Carta 2: %.2f hab/km²\n", DensidadeP2);
                printf("### Empatou! ###\n");
            }
        break;
        default:
            printf("Opção inválida, reinicie o jogo e escolha outra opção!");
            
    }
    
    
    return 0;
}