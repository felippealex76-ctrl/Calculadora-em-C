#include <stdio.h>

int calcular(int valor1, int valor2, char operador)
{

    if (operador == '+')
    {
        return valor1 + valor2;
    }
    else if (operador == '-')
    {
        return valor1 - valor2;
    }
    else if (operador == '*')
    {
        return valor1 * valor2;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int numero1;
    int numero2;
    int resultado;
    char operadorX;

    printf("digite um numero: ");
    scanf("%d", &numero1);

    printf("digite o operador: ");
    scanf(" %c", &operadorX);

    printf("digite um numero: ");
    scanf("%d", &numero2);

    resultado = calcular(numero1, numero2, operadorX);

    printf("Resultado: %d", resultado);

    return 0;
}