
#include <stdio.h>
int main()
{
    int n, bubblesort, display;
    printf("number of elements ");
    scanf("%d", &n);
    int b[100];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element ");
        scanf("%d", b + i);
    }
    bubbleSort(b, n);
    display(b, n);

    return 0;
}
