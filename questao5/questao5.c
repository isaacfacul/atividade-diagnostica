#include <stdio.h>

int main () {
    int m_inicial = 8;
    int p_inicial = 120;
    int horas = 5;
    int m_final = 10;
    
    printf("Em uma fábrica, 8 máquinas produzem 120 peças em 5 horas.\nSe todas as máquinas trabalharem na mesma velocidade, quantas peças serão produzidas por 10 máquinas no mesmo período?\n");
    
    float pecas_por_maquina = p_inicial / m_inicial;
    
    float p_final = pecas_por_maquina * m_final;
    
    printf("Quantidade de peças feitas por 10 maquinas em 5 horas: %f", p_final);
    
    return 0;
}