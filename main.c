#include <stdio.h>

float CelsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float FahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main(void) {
    int choice;
    float temperature;

    do {
        printf("Welcome to Celsius To Fahrenheit\n");

        printf("\n1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("3. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temperature);
                printf("\nTemperature is: %.1f°F\n\n", CelsiusToFahrenheit(temperature));
                break;

            case 2:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &temperature);
                printf("\nTemperature is: %.1f°C\n\n", FahrenheitToCelsius(temperature));
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 3);

    return 0;
}
