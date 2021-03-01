#include <stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void display(int arr[], int n)
{
	int i;
	for(i=1; i<=n; i++)
	printf("%d", arr[i]);
}

int main()
{
	int i, j, n,temp,index;
	scanf("%d",n);
	int arr[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n-1; i++){
		temp=arr[i];
		index =1;
		for(j=i+1; j<n; j++)
		{
			if(arr[j]<temp)
			{
				temp=arr[j];
				index=j;
			}
			swap(&arr[i], &arr[index]);
		}
	
}
	display(arr,n);
	return 0;
}