/*Selva is developing a temperature conversion tool for a weather application that allows users to convert temperatures between Celsius and Fahrenheit based on their preference. 



The program will prompt the user to enter a temperature value and then choose the desired conversion:

C or c - Fahrenheit to Celsius
F or f - Celsius to Fahrenheit


Help Selva to write a program that performs the accurate conversion and displays the result.



Formula:

The conversion formulas used are:

To convert Celsius to Fahrenheit: Fahrenheit = (Celsius x (9/5)) + 32

To convert Fahrenheit to Celsius: Celsius = (Fahrenheit - 32) x (5/9)

Input format :
The first line of input consists of a float value representing the temperature.

The second line consists of a character (C/c or F/f) representing the type of conversion.

Output format :
If the type is c/C, the output prints a float value, representing the temperature after converting to Celsius, rounded to two decimal values followed by " degree Celsius".

If the type is f/F, the output prints a float value, representing the temperature after converting to Fahrenheit, rounded to two decimal values followed by " degree Fahrenheit".

If the type is neither c/C nor f/F, the output prints "Invalid character for conversion".*/

#include <stdio.h>

int main() {
    float temperature;
    char conversionDirection;
    scanf("%f %c", &temperature, &conversionDirection);
    if (conversionDirection == 'F' || conversionDirection == 'f') {
        float fahrenheit = (temperature * 9 / 5) + 32;
        printf("%.2f degree Fahrenheit",fahrenheit);
    } 
        //If conversionDirection is 'F' or 'f', perform the Celsius-to-Fahrenheit conversion.
//If conversionDirection is 'C' or 'c', perform the Fahrenheit-to-Celsius conversion.
//If conversionDirection is neither of these, output "Invalid character for conversion".

    
    else if (conversionDirection == 'C' || conversionDirection == 'c') {
        float celsius = (temperature - 32) * 5 / 9;
        printf("%.2f degree Celsius", celsius);
    } 
    
    else {
        printf("Invalid character for conversion");
    }

    return 0;
}

