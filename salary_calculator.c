/*
 * salary_calculator.c
 * Author: Gael Morales Hernandez
 *
 * Calculates gross and net salary from regular hours, overtime hours,
 * and a tax withholding percentage.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    float regularHours, hourlyRate;
    float overtimeHours, overtimeRate;
    float taxPercent;
    float grossSalary, taxAmount, netSalary;

    printf("Regular hours worked:   ");
    scanf("%f", &regularHours);

    printf("Hourly rate:            ");
    scanf("%f", &hourlyRate);

    printf("Overtime hours worked:  ");
    scanf("%f", &overtimeHours);

    printf("Overtime hourly rate:   ");
    scanf("%f", &overtimeRate);

    printf("Tax withholding (%%):    ");
    scanf("%f", &taxPercent);

    grossSalary = (regularHours * hourlyRate) + (overtimeHours * overtimeRate);
    taxAmount   = (taxPercent / 100.0f) * grossSalary;
    netSalary   = grossSalary - taxAmount;

    printf("\nGross salary: $%.2f\n", grossSalary);
    printf("Tax withheld: $%.2f\n",  taxAmount);
    printf("Net salary  : $%.2f\n",  netSalary);

    getch();
    return 0;
}
