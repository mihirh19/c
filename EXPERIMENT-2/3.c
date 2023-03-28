/*You are given time in total seconds. Convert it into Hour: Min: Seconds format.
 */

#include <stdio.h>

int main()
{
    int h, m, s, n, t1;

    printf("Enter the total second\n");
    scanf("%d", &n);

    h = n / 3600;
    t1 = n % 3600;
    m = t1 / 60;
    s = t1 % 60;

    printf("hour:%d minute:%d second:%d", h, m, s);

    return 0;
}