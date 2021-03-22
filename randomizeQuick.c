#include <stdio.h>

void display(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
         printf("%d",array[i]);
        printf(" ");
    }
}

int partition(int a[], int l, int r)
{
    int x = rand() % (r - l + 1) + l;
    swap(a[x], a[r]);
    int pivot = a[r];
    int i = (l - 1);
    for (int j = l; j <= r - 1; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return (i + 1);
}

void randomizedQuickSort(int a[], int l, int r)
{
    if (l < r)
    {
        int p = partition(a, l, r);
        randomizedQuickSort(a, l, p - 1);
        randomizedQuickSort(a, p + 1, r);
    }
}

int main()
{
    int n;
     printf("Enter the size: ");
    scanf("%d",&n);
    printf("Enter the elements of array ");
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d",&a[i]);
    randomizedQuickSort(a, 0, n);
    display(a, n);
    return 0;
}