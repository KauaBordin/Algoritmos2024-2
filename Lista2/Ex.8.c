#include <stdio.h>

int main()
{
    double celcius = 0.0;
    double result = 0.0;
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celcius);
    result = 32 + (celcius * 9/5);
    printf("A temperatura é de %.2f graus Fahrenheit.", result);

    return 0;
}