/*W.A.P to convert the temperature unit from Fahrenheit to Celsius using the formula
C = (F – 32) / 1.8.
*/
#include <stdio.h>

int main()
{
    float ft, ct;
    printf("Enter the temperature in fahrenheit\n");
    scanf("%f", &ft);

    ct = (ft - 32) / 1.8;
    // ct = (ft - 32) / (9.0 / 5);

    printf("TC=%f", ct);

    return 0;
}
