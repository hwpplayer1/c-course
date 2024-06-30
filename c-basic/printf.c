#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    printf("a = %d, b = %d\n", a, b); /* a = 10, b = 20 */
    printf("a = %d, b = %d\n", b, a); /* a = 20, b = 10 */
    printf("%d%d\n", a, b);           /* 1020 */

    return 0;
}