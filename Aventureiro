#include<stdio.h>
#include<locale.h>
// Verificar se o sistema é Windows. Se for, incluir a biblioteca.
    #ifdef _WIN32
        #include <windows.h>
    #endif	

int main () {
    // A string vazia "" pega o idioma padrão do sistema operacional em que está rodando.
    setlocale(LC_ALL, "");
    
    // Executa os comandos de console APENAS se estiver no Windows
    #ifdef _WIN32
        SetConsoleCP(1252);
        SetConsoleOutputCP(1252);
    #endif
            
    // Variáveis da Carta 1
    char CodigoCarta1[10];
    char Estado1[50];
    char Cidade1[50];
    float Populacao1;
    float Area1;
    float PIB1;
    int NumeroPontosTuristicos1;
    float Densidade_Populacional1;
    float PIB_per_capita1;

    // Variáveis da Carta 2
    char CodigoCarta2[10];
    char Estado2[50];
    char Cidade2[50];
    float Populacao2;
    float Area2;
    float PIB2;
    int NumeroPontosTuristicos2;
    float Densidade_Populacional2;
    float PIB_per_capita2;

    // --- Leitura da carta 1 ---
    printf("Digite o código da carta 1: ");
    scanf("%s", CodigoCarta1); // Sem o &
    printf("Digite o nome do Estado 1: ");
    scanf("%s", Estado1); // Sem o &
    printf("Digite o nome da cidade 1: ");
    scanf("%s", Cidade1); // Sem o &
    printf("Digite a população da cidade 1 (em milhão): ");
    scanf("%f", &Populacao1); // Com o & (pois é float)
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &Area1);
    printf("Digite o PIB da cidade 1 (em bilhões de reais): ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &NumeroPontosTuristicos1);

    // --- Leitura da carta 2 ---
    printf("Digite o código da carta 2: ");
    scanf("%s", CodigoCarta2); // Sem o &
    printf("Digite o nome do Estado 2: ");
    scanf("%s", Estado2); // Sem o &
    printf("Digite o nome da cidade 2: ");
    scanf("%s", Cidade2); // Sem o &
    printf("Digite a população da cidade 2 (em milhão): ");
    scanf("%f", &Populacao2);
    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &Area2);
    printf("Digite o PIB da cidade 2 (em bilhões de reais): ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &NumeroPontosTuristicos2);

    // --- Operações Aritméticas ---
    // Removido o cast C++ (double/float). O .0f já garante que a conta seja em ponto flutuante.
    Densidade_Populacional1 = (Populacao1 * 1000000.0f) / Area1;
    PIB_per_capita1 = (PIB1 * 1000.0f) / Populacao1;
    
    Densidade_Populacional2 = (Populacao2 * 1000000.0f) / Area2;
    PIB_per_capita2 = (PIB2 * 1000.0f) / Populacao2;

    // --- Exibir dados ---
    printf("\n--- Informações da Carta 1 ---\n");
    printf("Código da Carta: %s\n", CodigoCarta1);
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %.3f milhões de habitantes\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", NumeroPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional1); // Adicionado unidade
    printf("PIB per capita: %.2f reais\n", PIB_per_capita1); // Adicionado unidade

    printf("\n--- Informações da Carta 2 ---\n");
    printf("Código da Carta: %s\n", CodigoCarta2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %.3f milhões de habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumeroPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2); // Adicionado unidade
    printf("PIB per capita: %.2f reais\n", PIB_per_capita2); // Adicionado unidade
    
    return 0;   
}
