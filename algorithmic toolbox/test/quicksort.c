#include<stdio.h>
void quicksort(int arr[], int start, int end)
{	
	if(start<end)//when array has no elements to sort : func terminate cond.
	{
		int p_index = partition(arr,start,end);//calling partition func.
		quicksort(arr,start,p_index-1);//callin quicksort with updated start and end index, pivot excluded
		quicksort(arr,p_index+1,end);//callin quicksort with updated start and end index, pivot excluded
	}	
}

int partition(int arr[],int start,int end)
{
	int pivot = arr[end], p_index = start;//ini. pivot with last element of the arrays, 
	int i;
	int temp;
	for(i=start;i<end;i++)
	{
		if(arr[i]<pivot)//swap if element is less than pivot
		{
			temp = arr[i];
			arr[i] = arr[p_index];
			arr[p_index] = temp;
			p_index += 1;
		}
	}
	temp = 0;
	//swap pivot with element at p_index
	temp = arr[end];
	arr[end] = arr[p_index];
	arr[p_index] = temp;
	//now the element to the left of pivot is less and to the right is greater than the pivot.
	return p_index;
}
//main function
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	int start = 0, end = n-1;
	quicksort(arr,start,end);//callin quicksort func.
	//print sorted array.
	for(i=0;i<n;i++)
		printf("%d\n",arr[i] );

	return 0;
}