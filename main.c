#include <stdio.h>
#include <math.h>


double derivada_potencia(double x, int k) {
    return k * pow(x, k - 1);
}

double derivada_inversa(double x) {
    return -1.0 / (x * x);
}

double derivada_seno(double x) {
    return cos(x);
}

int main() {
    int opcao;
    double x;
    int k;
    double resultado;

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Calcular a derivada de f(x) = x^k\n");
        printf("2 - Calcular a derivada de f(x) = 1/x\n");
        printf("3 - Calcular a derivada de f(x) = sin(x)\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                break;
            case 1:
                printf("Digite o valor de x: ");
                scanf("%lf", &x);
                printf("Digite o valor de k: ");
                scanf("%d", &k);
                resultado = derivada_potencia(x, k);
                printf("A derivada de f(x) = x^%d em x = %.1lf eh: %.4lf\n", k, x, resultado);
                break;
            case 2:
                printf("Digite o valor de x: ");
                scanf("%lf", &x);
                resultado = derivada_inversa(x);
                printf("A derivada de f(x) = 1/x em x = %.1lf eh: %.4lf\n", x, resultado);
                break;
            case 3:
                printf("Digite o valor de x: ");
                scanf("%lf", &x);
                resultado = derivada_seno(x);
                printf("A derivada de f(x) = sin(x) em x = %.2lf eh: %.4lf\n", x, resultado);
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}

