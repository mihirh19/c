/*Assume that any month is of 30 days. Now you are given total days. Find out the exact
number of Years, Months & Days.
*/

#include <stdio.h>

int main()
{
    int y, m, d, t1, n;

    printf("Enter the totel number of days\n");
    scanf("%d", &n);

    y = n / 360;
    t1 = n % 360;
    m = t1 / 30;
    d = t1 % 30;

    printf("YEAR:%d  MONTHS:%d  DAYS:%d", y, m, d);

    return 0;
}
