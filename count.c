#include <stdio.h>

void count(int arr[], int n)
{
    int maxCount = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }
    if (maxCount > n / 2)
        printf("%d",arr[index]);
    else
        printf("No ");
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
    count(a, n);
    return 0;
}