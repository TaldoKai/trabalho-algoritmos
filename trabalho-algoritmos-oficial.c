#include <stdio.h>

    struct str_usuario{
    char email[100];
    int idade;
    char nome[100];
    char sobrenome[100];
    };

double kilosParaGramas() {
        double kilos, gramas;
        printf("Digite quantos Kg deseja converter, EX: '72'\n");
        scanf("%lf", &kilos);
        gramas = kilos * 1000;
        printf("O total em gramas convertidos é: %.0lfgramas", gramas);
        return (gramas);
    }

double gramasParaKilos() {
        double kilos, gramas;
        printf("Digite quantos gramas deseja converter, EX: '7200'\n");
        scanf("%lf", &gramas);
        kilos = gramas / 1000;
        printf("O total em gramas convertidos é: %.2lfKg", kilos);
        return (kilos);
    }

double realParaDolar() {
        double dolar, real;
        printf("Digite quantos Reais deseja converter para Dólar, EX: '75.50'\n");
        scanf("%lf", &real);
        dolar = real * 0.21; //cotação de 16/06/2023
        printf("O total em Dólares é: U$%.2lf\n", dolar);
        return(dolar);
    }

double dolarParaReal() {
        double dolar, real;
        printf("Digite quantos Dólares deseja converter para Real, EX: '55.50'\nR$:");
        scanf("%lf", &dolar);
        real = dolar / 0.21; //cotação de 16/06/2023
        printf("O total em Reais é: R$%.2lf\n", real);
        return (real);
    }

int mediaDeValoresVetor(){
    double vetor[100];
    double soma = 0, media = 0, num = 0;
    int N = 0, i;
    printf("quantos números deseja fazer a média?\n");
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        printf("Digite um valor: \n");
        scanf("%lf", &num);
        soma += vetor[i] + num;
        media = soma / N;
    }
    printf("A média dos valores é: %.2lf\n", media);
    return(media);
}

int calculaGasolina(){
    double calculo, litrosGasolina, distancia, precoGasolina, mediaConsumo;
    printf("Quanto custa o litro de gasolina?\n");
    scanf("%lf", &precoGasolina);
    printf("Qual a distância percorrida? (Em Km, ex: 150.00)\n");
    scanf("%lf", &distancia);
    printf("Qual a média de consumo de seu veiculo? (Em Km por Litro)\n");
    scanf("%lf", &mediaConsumo);
    litrosGasolina = distancia / mediaConsumo;
    calculo = litrosGasolina * precoGasolina;
    printf("Você precisa de %.2lf litros de gasolina para andar esta distância (%.2lfKm), custando R$%.2lf no total\n", litrosGasolina, distancia, calculo);
    return(calculo);
}

int main() {
    struct str_usuario usuario;
    int operacao, saida;
    printf("\nOlá! Vamos iniciar seu cadastro!\n");
    printf("\nDigite um E-mail: ");
    scanf ("%s", &usuario.email);
    printf("\nDigite seu nome: ");
    scanf("%s", usuario.nome);
    printf("\nDigite seu sobrenome: ");
    scanf("%s", usuario.sobrenome);
    printf("\nDigite sua idade: ");
    scanf ("%d", &usuario.idade);    
    printf("\nÓtimo! Quando desejar checar seus dados digite -1\n");
    printf("\nBem vindo(a) %s! Ao sistema de conversões!\nSelecione um dos tipos de conversão a seguir para calcular:\n\n", usuario.nome);
   
    do {
        printf("****************************|MENU|****************************\n");
    	printf("| 1 - Kg para gramas                                         |\n");
    	printf("| 2 - gramas para Kg                                         |\n");
    	printf("| 3 - Real para Dólar                                        |\n");
    	printf("| 4 - Dólar para Real                                        |\n");
    	printf("| 5 - Média de valores                                       |\n");
    	printf("| 6 - (BÔNUS) - Calcular gasolina para percorrer X distância |\n");
    	printf("| 0 - Sair                                                   |\n");
    	printf("**************************************************************\n");
        scanf("%d", &operacao);
        switch (operacao)
        {
        case 1:
           kilosParaGramas();
            break;
        case 2:
            gramasParaKilos();
            break;
        case 3:
            realParaDolar();
            break;
        case 4:
            dolarParaReal();
            break;
        case 5:
            mediaDeValoresVetor();
            break;
        case 6:
            calculaGasolina();
            break;
        case -1:
            printf("Nome completo: %s %s \nE-mail: %s \nIdade: %d\n", usuario.nome, usuario.sobrenome, usuario.email, usuario.idade);
            break;
        default:
        break;
        }
        printf("\nDeseja realizar uma nova operação? (1 para sim, 0 para encerrar)\n");
        scanf("%d", &saida);
        if(saida == 0){
            operacao = 0;
        };
    } while (operacao != 0 || saida != 0);
    printf("\nMuito obrigado %s por usar o SISTEMA DE CONVERSÕES!!!\n", usuario.nome);
    return 0;
}
