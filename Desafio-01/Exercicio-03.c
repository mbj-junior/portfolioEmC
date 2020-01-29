/*
    3)Uma revendedora de carros usados paga a seus funcionários vendedores um salário 
    fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do
    valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de
    carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele
    recebe por carro vendido. Calcule e escreva o salário final do vendedor.
*/

#include <stdio.h>

float CalcularSalario (float salarioVendedor,float valorTotalVendido,
float comicaoPorCarroVendido, int numCarrosVendidos){

    float salarioFinal=0,
          taxaFixa = 0.05;
          
    salarioFinal = salarioVendedor+ 
                   (comicaoPorCarroVendido*numCarrosVendidos)+
                   (taxaFixa*valorTotalVendido);
return salarioFinal;
}
    
void mensagens (){
    float   salarioVendedor = 0,
            valorTotalVendido = 0,
            comicaoPorCarroVendido = 0,
            salarioCalculado = 0;

    int     numCarrosVendidos = 0;
    
        printf("informe o salario do vendedor: ");
        scanf("%f", &salarioVendedor);
        printf("informe o valor total vendido: ");
        scanf("%f", &valorTotalVendido);
        printf("informe a comicao por venda: ");
        scanf("%f", &comicaoPorCarroVendido);
        printf("informe o quando carro foram vendidos: ");
        scanf("%i", &numCarrosVendidos);
    
        printf("\nSalario final = %.2f\n", CalcularSalario(salarioVendedor,
        valorTotalVendido, comicaoPorCarroVendido, numCarrosVendidos));
    }

int main(void) {
    char condicao='s';
    
    do{
        mensagens();
        printf("\nCalcular para outro vendedor sim(s) ou nao(n): ");
        condicao = getchar();
        }while(condicao == 's');
        
    return 0;
}