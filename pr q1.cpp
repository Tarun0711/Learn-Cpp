#include <stdio.h>
void func1(int a[], int n)
{
    int sum = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum = sum + a[i];
        }
    }
    printf("sum of even number =%d\n", sum);
}
void func2(int a[], int n)
{
    int sum = 0;
    int i;
    for (i = 0; i < n; i += 2)
    {
        sum += a[i];
    }
    printf("sum of even position no. = %d\n", sum);
}int main()
{
    int num;
    printf("number of elements = ");
    scanf("%d", &num);
    int arr[num];
    int i;
    for (i = 0; i < num; i++)
    {
        printf("Enter element : ");
        scanf("%d", &arr[i]);
    }
    func1(arr, num);
    func2(arr, num);
    return 0;
}
