#include <stdio.h>

int main() {
    float peso, altura, bmi;

    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);
    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    bmi = peso / (altura * altura);

    printf("\nSu índice de masa corporal es: %.2f\n", bmi);
    printf("\nÍndice     | Condición\n");
    printf("-----------------------------\n");
    printf("<18.5      | Bajo peso\n");
    printf("18.5–24.9  | Normal\n");
    printf("25.0–29.9  | Sobrepeso\n");
    printf(">=30       | Obesidad\n");

    return 0;
}
