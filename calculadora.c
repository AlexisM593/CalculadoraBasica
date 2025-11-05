#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    printf("=== Calculadora Basica ===\n");
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);

    printf("Ingrese el operador (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    switch(op) {
        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Resultado: %.2f\n", num1 / num2);
            else
                printf("Error: división por cero.\n");
            break;
        default:
            printf("Operador no válido.\n");
    }

    return 0;
}
