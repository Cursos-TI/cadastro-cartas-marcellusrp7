#include<stdio.h>
#include<locale.h>
// Verificar se o sistema é Windows. Se for, incluir a biblioteca.
    #ifdef _WIN32
    	#include <windows.h>
    #endif	

int main () {
	// A string vazia "" pega o idioma padrão do sistema operacional em que está rodando.
    // É mais seguro que "Portuguese", pois o Linux geralmente prefere "pt_BR.UTF-8".
    setlocale(LC_ALL, "");
    
    // Executa os comandos de console APENAS se estiver no Windows
    #ifdef _WIN32
        SetConsoleCP(1252);
        SetConsoleOutputCP(1252);
    #endif
           
    // Variáveis da Carta 1
    char CodigoCarta1[10]; 								// Variável para armazenar o código da carta 1
    char Estado1[50];    								// Variável para armazenar o nome do Estado 1
    char Cidade1[50];    								// Variável para armazenar o nome da cidade 1
    float Populacao1;    								// Variável para armazenar a população da cidade 1
    float Area1;    									    // Variável para armazenar a área da cidade 1
    float PIB1;       									// Variável para armazenar o PIB da cidade 1
    int NumeroPontosTuristicos1; 						// Variável para armazenar o número de pontos turísticos da cidade 1

	// Variáveis da Carta 2
    char CodigoCarta2[10]; 								// Variável para armazenar o código da carta 2
    char Estado2[50];    								// Variável para armazenar o nome do Estado 2
    char Cidade2[50];    								// Variável para armazenar o nome da cidade 2
    float Populacao2;    								// Variável para armazenar a população da cidade 2
    float Area2;    									    // Variável para armazenar a área da cidade 2
    float PIB2;       									// Variável para armazenar o PIB da cidade 2
    int NumeroPontosTuristicos2; 						// Variável para armazenar o número de pontos turísticos da cidade 2

	// Leitura da carta 1
	printf("Digite o código da carta 1: ");
    scanf("%s", &CodigoCarta1);
    printf("Digite o nome do Estado 1: ");
    scanf("%s", &Estado1);
    printf("Digite o nome da cidade 1: ");
    scanf("%s", &Cidade1);
    printf("Digite a população da cidade 1 (em milhão): ");
    scanf("%f", &Populacao1);
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &Area1);
    printf("Digite o PIB da cidade 1 (em bilhões de reais): ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &NumeroPontosTuristicos1);  

	// Leitura da carta 2
	printf("Digite o código da carta 2: ");
    scanf("%s", &CodigoCarta2);
    printf("Digite o nome do Estado 2: ");
    scanf("%s", &Estado2);
    printf("Digite o nome da cidade 2: ");
    scanf("%s", &Cidade2);
    printf("Digite a população da cidade 2 (em milhão): ");
    scanf("%f", &Populacao2);
    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &Area2);
    printf("Digite o PIB da cidade 2 (em bilhões de reais): ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &NumeroPontosTuristicos2); 

	//Exibir dados
    printf("\n--- Informações da Carta 1 ---\n");
    printf("Código da Carta: %s\n", CodigoCarta1);
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %.3f habitantes\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", NumeroPontosTuristicos1);
	
	 printf("\n--- Informações da Carta 2 ---\n");
    printf("Código da Carta: %s\n", CodigoCarta2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %.3f habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumeroPontosTuristicos2);                          
    
    return 0;   

} 
