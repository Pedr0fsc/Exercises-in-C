#include <stdio.h>
#include <math.h>

// Exercício 19 - Biblioteca Cmath

int main() {
    int num1, num2;
    float num3, a, b, c;
    printf("Digite um número inteiro: ");
    scanf("%i", &num1);
    printf("Digite outro número inteiro: ");
    getchar();
    scanf("%i", &num2);
    printf("Digite um número real: ");
    getchar();
    scanf("%f", &num3);
    
    a = (num1 * 2) * (num2 / 2.0);
    b = (num1 * 3) + num3;
    c = pow(num3, 3);
    printf("a - %.0f\nb - %.0f\nc - %.0f", a, b, c);
    return 0;
}