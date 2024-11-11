#include "TemperatureConversion.h"

double fahrenheitToCelcius(double fahr) {
    return (5.0 / 9.0) * (fahr - 32.0);
}
double fahrenheitToKelvin(double fahr) {
    return ((fahr -32) / 1.79999999) + 273.15;
}
double fahrenheitToRankine(double fahr) {
    return ( fahr + 459.67);
}


double celciusToFahrenheit(double cel) {
    return (cel * (9.0 / 5.0)) + 32.0;
}
double celciusToKelvin(double cel) {
    return (cel + 273.15);
}
double celciusToRankine(double cel) {
    return (cel * (9 / 5) + 491.67);
}


double kelvinToCelcius(double kel) {
    return (kel - 273.15);
}
double kelvinToFahrenheit(double kel){
    return ((kel - 273.25) * 1.8) + 32.00;
}
double kelvinToRankine(double kel) {
    return (kel * 1.8);
}


double rankineToFahrenheit(double ran) {
    return (ran - 459.67);
}
double rankineToCelcius(double ran) {
    return (ran - 491.67) * (5 / 9);
}
double rankineToKelvin(double ran) {
    return (ran * (9 / 5));
}
