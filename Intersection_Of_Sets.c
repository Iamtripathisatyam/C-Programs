#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int a[20], b[20];
    int i, n1, n2, j = 0, k = 0, l = 0, f = 0;
    int d[50] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    printf("\n\t\tHow Many Elements Do You Want To Enter in SET 1: ");
    scanf("%d", &n1);
    printf("\n");
    for (i = 0; i < n1; i++)
    {
        printf("\t\tEnter %d Element: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n1; i++)
    {
        for (k = i + 1; k < n1; k++)
        {

            if (a[i] == a[k])
            {

                d[k] = 0;
            }
        }
        if (d[i] != 0)
        {
            l++;
            d[i] = a[i];
        }
    }
    int y = 0;
    for (i = 0; i < n1; i++)
    {
        if (d[i] != 0)
        {
            a[y] = d[i];
            y++;
        }
    }
    int o[50] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    printf("\n\t\tHow Many Elements Do You Want To Enter in SET 2: ");
    scanf("%d", &n2);
    printf("\n");
    for (i = 0; i < n2; i++)
    {
        printf("\t\tEnter %d Element: ", i + 1);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n2; i++)
    {
        for (k = i + 1; k < n1; k++)
        {

            if (b[i] == b[k])
            {

                o[k] = 0;
            }
        }
        if (o[i] != 0)
        {
            f++;
            o[i] = b[i];
        }
    }
    int z = 0;
    for (i = 0; i < n2; i++)
    {
        if (o[i] != 0)
        {
            b[z] = o[i];
            z++;
        }
    }
    int c[20], flag = 0, w = 0;
    for (i = 0; i < l; i++)
    {
        flag = 0;
        for (j = 0; j < f; j++)
        {
            if (a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            c[w] = a[i];
            w++;
        }
    }
    printf("\n\t\tIntersection of SET 1 and SET 2: ");
    for (i = 0; i < w; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n\n\n\n\n");
    return 0;
}
