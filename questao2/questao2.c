#include <stdio.h>

int main() {
    float salario, hora_extra, valor_h_extra, salario_final;
    printf("Salário e hora extra\n");
    printf("Insira seu salário:");
    scanf("%f" , &salario);
    
    printf("Insira o valor das horas extras:");
    scanf("%f" , &valor_h_extra);
    
    printf("Insira a quantidade de horas:");
    scanf("%f" , &hora_extra);
    
    salario_final = salario + valor_h_extra * hora_extra;
    printf("Seu salário final é:%f" , salario_final);

    return 0;
}