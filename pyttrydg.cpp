#include <stdio.h>
int main()
{
    int n, a;
    printf("number of elements ");
    scanf("%d", &n);
    int b[100];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element ");
        scanf("%d", b + i,&a);
    }
    printf("%d");

    return 0;
}
