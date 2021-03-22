#include <stdio.h>

double median(int a[], int n)
{
    sort(a, a + n);
    if (n % 2 != 0)
    {
        return (double)a[n / 2];
    }
    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}

int main()
{
    int i;
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("Enter the elements of array ");
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d",&a[i]);
    median(a, n);
}