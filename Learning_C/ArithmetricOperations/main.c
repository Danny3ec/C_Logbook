  #include "MyMaths.h"
  #include "TemperatureConversion.h"
  #include <stdio.h>

  int main() {
    /*place the proceeding*/

    float num1 = 100.0f;
    printf("Fahrenheit to Celcius: %.2fC \n", num1, fahrenheitToCelcius(num1));
    printf("Fahrenheit to Kelvin: %.2fF -> %.2fK \n", num1, fahrenheitToKelvin(num1));
    printf("Fahrenheit to Rankine: %.2fF -> %.2fR \n", num1, fahrenheitToRankine(num1));
    printf("Celcius to Fahrenheit: %.2fC -> %.2fF \n", num1, celciusToFahrenheit(num1));
    printf("Celcius to Kelvin: %.2fC -> %.2fK \n", num1, celciusToKelvin(num1));
    printf("Celcius to Rankine: %.2fC -> %.2fR \n", num1, celciusToRankine(num1));
    printf("Kelvin to Fahrenheit: %.2fK -> %.2fF \n", num1, kelvinToFahrenheit(num1));
    printf("Kelvin to Celcius: %.2fK -> %.2fC \n", num1, kelvinToCelcius(num1));
    printf("Kelvin to Rankine: %.2fK -> %.2fR \n", num1, kelvinToRankine(num1));
    printf("Rankine to Fahrenheit: %.2fR -> %.2fF \n", num1, rankineToFahrenheit(num1));
    printf("Rankine to Celcius: %.2fR -> %.2fC \n", num1, rankineToCelcius(num1));
    printf("Rankine to Kelvin: %.2fR -> %.2fK \n", num1, rankineToKelvin(num1));


    /*
    
  
    float num1 = 0.0f, num2 = 0.0f;
    printf("Enter two numbers, the second number must not be zero: ");
    scanf("%f %f", &num1, &num2);
    fflush(stdout);

    printf("Additon:       %.2f + %.2f = %.2f\n", num1, num2, add(num1, num2));
    printf("Subtraction:   %.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2));
    printf("Multiply:      %.2f * %.2f = %.2f\n", num1, num2, multiply(num1, num2));
    printf("Division:      %.2f / %.2f = %.2f\n", num1, num2, divide(num1, num2));
    printf("Squared:       %.2f * %.2f = %.2f\n", num1, num1, square(num1));
    printf("Squared:       %.2f * %.2f = %.2f\n", num2, num2, square(num2));

    */
    
      
    return 0;
  }