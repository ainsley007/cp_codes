#include<stdio.h>
int binary_search(long long arr[], int low, int high, long long key)
{
	if(high>=low)// to check if the array has elements
	{
		int mid = low + (high - low)/2;//calc mid index to divide the array

		if(arr[mid] == key)
			return mid;//if element found, return the index
		else if(arr[mid]>key)
			return binary_search(arr,low,mid-1,key);//if element less  than mid element , update high value
		else if(arr[mid]<key)
			return binary_search(arr,mid+1,high,key);//if element greater  than mid element , update low value
		
	}
	
	return -1;//program comes here when element isn't present in the sorted array.
	
}
int main()
{
	long long n,k;//length of arrays
	scanf("%lld",&n);
	long long arr[n];//sorted array
	int i;
	for(i=0;i<n;i++)
		scanf("%lld",&arr[i]);
	scanf("%lld",&k);
	long long search[k];//array of elements to be searched
	for(i=0;i<k;i++)
		scanf("%lld",&search[i]);

	int low = 0, high = n-1, result = 0;
	
	for(i=0;i<k;i++)
	{
		result = binary_search(arr,low,high,search[i]);//passing sorted element array, low ,high and element to be searched
		(result == -1) ? printf("-1 ") : printf("%d ",result);
	}
    //	result = binary_search(arr,low,high,search[4]);//passing sorted element array, low ,high and element to be searched
	//	(result == -1) ? printf("-1 ") : printf("%d ",result);
	//	for(i=0;i<k;i++)
	//	    printf("\n%d",search[i]);
	
	return 0;
}