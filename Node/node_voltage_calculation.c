#include <stdio.h>
//Danny3ec.

int main() {
    // Declare variables for resistors and voltage sources
    double R1, R2, R3, R4, R5, R6, Vs1, Vs2;
    double V1, V2, V3;  // Node voltages to solve for
	printf("\033[H\033[J");


	
    // Prompt user for resistor values and source voltage
    printf("Enter the value of R1 (in ohms): ");
	fflush(stdout);
    scanf("%lf", &R1);
    printf("Enter the value of R2 (in ohms): ");
	fflush(stdout);
    scanf("%lf", &R2);
    printf("Enter the value of R3 (in ohms): ");
	fflush(stdout);
    scanf("%lf", &R3);
    printf("Enter the value of R4 (in ohms): ");
	fflush(stdout);
    scanf("%lf", &R4);
    printf("Enter the value of R5 (in ohms): ");
	fflush(stdout);
    scanf("%lf", &R5);
    printf("Enter the value of R6 (in ohms): ");
	fflush(stdout);
    scanf("%lf", &R6);
    
    printf("Enter the value of the first voltage source Vs1 (in volts): ");
	fflush(stdout);
    scanf("%lf", &Vs1);

    printf("Enter the value of the second voltage source Vs2 (in volts): ");
	fflush(stdout);
    scanf("%lf", &Vs2);

    // Coefficients for the system of equations based on KCL
    double a11 = (1 / R1 + 1 / R4 + 1 / R6);  // Equation for V1
    double a12 = -1 / R4;
    double a13 = -1 / R6;
    double b1 = Vs1 / R1;  // Independent source for V1

    double a21 = -1 / R4;
    double a22 = (1 / R2 + 1 / R4 + 1 / R5);  // Equation for V2
    double a23 = -1 / R5;
    double b2 = 0;  // No independent source for V2

    double a31 = -1 / R6;
    double a32 = -1 / R5;
    double a33 = (1 / R5 + 1 / R6 + 1 / R3);  // Equation for V3
    double b3 = Vs2 / R3;  // Independent source for V3

    // Solve using Cramer's rule

    // Calculate the determinant D of the coefficient matrix
    double D = a11 * (a22 * a33 - a23 * a32) - a12 * (a21 * a33 - a23 * a31) + a13 * (a21 * a32 - a22 * a31);
    
    // Calculate the determinants for V1, V2, and V3 using Cramer's Rule
    double D1 = b1 * (a22 * a33 - a23 * a32) - a12 * (b2 * a33 - a23 * b3) + a13 * (b2 * a32 - a22 * b3);
    double D2 = a11 * (b2 * a33 - a23 * b3) - b1 * (a21 * a33 - a23 * a31) + a13 * (a21 * b3 - b2 * a31);
    double D3 = a11 * (a22 * b3 - b2 * a32) - a12 * (a21 * b3 - b2 * a31) + b1 * (a21 * a32 - a22 * a31);

    // Calculate node voltages
    V1 = D1 / D;
    V2 = D2 / D;
    V3 = D3 / D;

    // Output the results
    printf("\nNode Voltages:\n");
    printf("V1 = %.2f V\n", V1);
    printf("V2 = %.2f V\n", V2);
    printf("V3 = %.2f V\n", V3);

    return 0;
}


