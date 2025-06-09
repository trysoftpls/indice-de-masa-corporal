#include <stdio.h>

int main() {
    float peso, altura, bmi;

    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);
    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    bmi = peso / (altura * altura);
    
    printf("\nSu indice de masa corporal es: %.2f\n", bmi);
    printf("\nIndice     | Condicion\n");
    printf("-----------------------------\n");
    printf("<18.5      | Bajo peso\n");
    printf("18.5-24.9  | Normal\n");
    printf("25.0-29.9  | Sobrepeso\n");
    printf(">=30       | Obesidad\n");

    if (bmi < 18.5) {
        printf("En condiciones de Bajo Peso\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("En condiciones de peso Normal\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("En condiciones de Sobrepeso\n");
    } else if (bmi >= 30) {
        printf("En condiciones de Obesidad\n");
    }

    return 0;
}
