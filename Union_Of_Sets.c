#include <stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a[20], c[20], b[20];
    int i, n1, n2, j = 0, k = 0;
    int d[50] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    printf("\n\t\tHow Many Elements Do You Want To Enter in SET 1: ");
    scanf("%d", &n1);
    printf("\n");
    for (i = 0; i < n1; i++)
    {
        printf("\t\tEnter %d Element: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n\t\tHow Many Elements Do You Want To Enter in SET 2: ");
    scanf("%d", &n2);
    printf("\n");
    for (i = 0; i < n2; i++)
    {
        printf("\t\tEnter %d Element: ", i + 1);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
        j++;
    }
    for (i = 0; i < n2; i++)
    {
        c[j] = b[i];
        j++;
    }
    for (i = 0; i < (n1 + n2); i++)
    {
        for (k = i + 1; k < (n1 + n2); k++)
        {

            if (c[i] == c[k])
            {

                d[k] = 0;
            }
        }
        if (d[i] != 0)
            d[i] = c[i];
    }
    printf("\n\t\tUnion of SET 1 and SET 2: ");
    for (i = 0; i < (n1 + n2); i++)
    {
        if (d[i] != 0)
        {
            printf("%d ", d[i]);
        }
    }
    printf("\n\n\n\n\n");
    return 0;
}
