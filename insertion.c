#include <stdio.h>

void display(int arr[], int n)
{
	int i;
	for(i=1; i<=n; i++)
	printf("%d", arr[i]);
}

int main()
{
	int i, j, n,temp;
	scanf("%d",n);
	int arr[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<n; i++){
	temp= arr[i];
	j=i-1;
	while(arr[j]>temp && j>=0)
	{
		arr[j+1] = arr[j];
		j--;
	}
	arr[j+1] = temp;
}
	display(arr,n);
	return 0;
}