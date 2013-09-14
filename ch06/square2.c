/* square2.c

   Prints a table of squares using a for statement.

*/

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("\nThis program prints a tables of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%10d%10d\n", i, i * i);

    return 0;
}
