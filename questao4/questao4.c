#include <stdio.h>

int main() {
    float v_produto, p_desconto, valor_final;
    printf("Produto e desconto\n");
    printf("Insira o valor do produto:");
    scanf("%f" , &v_produto);
    
    printf("Insira o percentual de desconto:");
    scanf("%f" , &p_desconto);
    
    valor_final = v_produto - p_desconto / 100 * v_produto;
    printf("O valor final é: %f" , valor_final);


    return 0;
}