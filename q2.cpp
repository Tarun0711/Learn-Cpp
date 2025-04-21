#include <stdio.h>
#include <stdlib.h>
int sum(int c[], int l)
{
    int s = 0;
    for (int i = 0; i < l; i++)
    {
        s += c[i];
    }
    return (s);
}

int main()
{
    int n;
    printf("no. of elements ");
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", a + i);
    }
    printf("sum of the elements is %d\n", sum(a, n));
    if (sum(a, n) % 2 == 0)
    {
        printf("Sum is even\n");
    }
    else
    {
        printf("Sum is odd\n");
    }

    return 0;
}

