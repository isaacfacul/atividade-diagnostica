#include <stdio.h>

int main() {
    float raio, area, perimetro;
    printf("Área e perímetro\n");
    printf("Insira o raio:");
    scanf("%f" , &raio);
    area = 3.14 * raio * raio;
    
    perimetro = 2 * 3.14 * raio;
    
    printf("A área é: %f" , area);
    
    printf("Seu perímetro é: %f" , perimetro);


    return 0;
}