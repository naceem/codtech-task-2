#include <stdio.h>

/*Create a program that converts temperatures between Celsius,
Fahrenheit, and Kelvin. The program should allow the user to
input a temperature in one scale and output the converted
temperature in another scale.*/

int main() {
    printf("********--TEMPERATURE CONVERTER--********\n");
    printf("ENTER YOUR CONVERSION CHOICE:\n");
    printf("PRESS 1 --> Celsius to Fahrenheit\n");
    printf("PRESS 2 --> Celsius to Kelvin\n");
    printf("PRESS 3 --> Fahrenheit to Celsius\n");
    printf("PRESS 4 --> Fahrenheit to Kelvin\n");
    printf("PRESS 5 --> Kelvin to Celsius\n");
    printf("PRESS 6 --> Kelvin to Fahrenheit\n");

    char choice;
    scanf(" %c", &choice);
    float temp;

    switch (choice) {
        case '1':
            printf("Enter temperature in Celsius scale:\n");
            scanf("%f", &temp);
            printf("%.2f°F\n", (temp * 9) / 5 + 32);
            break;
        case '2':
            printf("Enter temperature in Celsius scale:\n");
            scanf("%f", &temp);
            printf("%.2fK\n", temp + 273.15);
            break;
        case '3':
            printf("Enter temperature in Fahrenheit scale:\n");
            scanf("%f", &temp);
            printf("%.2f°C\n", (temp - 32) * 5 / 9);
            break;
        case '4':
            printf("Enter temperature in Fahrenheit scale:\n");
            scanf("%f", &temp);
            printf("%.2fK\n", (temp - 32) * 5 / 9 + 273.15);
            break;
        case '5':
            printf("Enter temperature in Kelvin scale:\n");
            scanf("%f", &temp);
            printf("%.2f°C\n", temp - 273.15);
            break;
        case '6':
            printf("Enter temperature in Kelvin scale:\n");
            scanf("%f", &temp);
            printf("%.2f°F\n", (temp - 273.15) * 9 / 5 + 32);
            break;
        default:
            printf("PLEASE ENTER A VALID CHOICE!!\n");
            break;
    }

    return 0;
}
