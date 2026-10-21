// Atividade 1 - calculadora - divisão, multiplicação, subtração, soma
#include <stdio.h>

void soma (float numeroA, float numeroB) {
    float resultado;
    resultado = numeroA + numeroB;
    printf("Resultado soma: %f\n", resultado);
}

void subtracao(float numeroA, float numeroB) {
    float resultado;
    resultado = numeroA - numeroB;
    printf("Resultado subtracao: %f\n", resultado);

}

void multiplicacao(float numeroA, float numeroB) {
    float resultado;
    resultado = numeroA * numeroB;
    printf("Resultado multiplicacao: %f\n", resultado);

}

void divisao(float numeroA, float numeroB) {
    float resultado;
    resultado = numeroA / numeroB;
    printf("Resultado divisao: %f\n", resultado);

}

int main() {
    float numeroA, numeroB;
    printf("Digite o primeiro numero: ");
    scanf("%f", &numeroA);
    printf("Digite o segundo numero: ");
    scanf("%f", &numeroB);
    soma(numeroA, numeroB);
    subtracao(numeroA, numeroB);
    multiplicacao(numeroA, numeroB);
    divisao(numeroA, numeroB);

    return 0;
}
