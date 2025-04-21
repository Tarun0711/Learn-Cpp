#include <stdio.h>
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
#include <stdio.h>
int main()
{
    int n;
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
