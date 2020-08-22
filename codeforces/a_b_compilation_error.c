#include<stdio.h>
void quicksort(long long arr[],  int start,  int end)
{	
	if(start<end)//when array has no elements to sort : func terminate cond.
	{
		int p_index = partition(arr,start,end);//calling partition func.
		quicksort(arr,start,p_index-1);//callin quicksort with updated start and end index, pivot excluded
		quicksort(arr,p_index+1,end);//callin quicksort with updated start and end index, pivot excluded
	}	
}

int partition(long long arr[],int start, int end)
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
	long long n;
	scanf("%lld",&n);
	long long arr[n];
	int i;
	for(i=0;i<n;i++)
		scanf("%lld",&arr[i]);

	long long arr2[n-1];
	for(i=0;i<n-1;i++)
		scanf("%lld",&arr2[i]);	

	long long arr3[n-2];
	for(i=0;i<n-2;i++)
		scanf("%lld",&arr3[i]);
	
	int start = 0, end = n-1;
	quicksort(arr,start,end);//callin quicksort func.
	start = 0, end = n-2;
	quicksort(arr2,start,end);
	start = 0, end = n-3;
	quicksort(arr3,start,end);
	int flag = 0;
	for(i=0;i<n-1;i++)
	{
		if(arr[i] != arr2[i])
		{
			printf("%lld\n",arr[i]);
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		printf("%lld\n",arr[n]);

	flag = 0;

	for(i=0;i<n-2;i++)
	{
		if(arr2[i] != arr3[i])
		{
			printf("%lld\n",arr2[i]);
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		printf("%lld\n",arr2[n-2]);

	return 0;
}