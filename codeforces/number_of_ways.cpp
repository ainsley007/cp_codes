// C++ program to count the ways 
// to break the array in 3 equal parts 
// having equal sum. 
#include <stdio.h> 
//using namespace std; 

// Function to count the no of ways 
int countways(int a[], int n) 
{ 
	int cnt[n], s = 0; 
	for(int i=0;i<n;i++)
		cnt[i] = 0;
	// Calculating the sum of the array 
	// and storing it in variable s 
	for (int i = 0 ; i < n ; i++) 
	{ 
		s += a[i]; 
	} 

	// Checking s is divisible by 3 or not 
	if (s % 3 != 0) 
		return 0; 
	
	// Calculating the sum of each part 
	s /= 3; 
	
	int ss = 0; 
	
	// If the sum of elements from i-th to n-th 
	// equals to sum of part putting 1 in cnt 
	// array otherwise 0. 
	for (int i = n-1; i >= 0 ; i--) 
	{ 
		ss += a[i]; 
		if (ss == s) 
			cnt[i] = 1; 
	} 
	
	// Calculating the cumulative sum 
	// of the array cnt from the last index. 
	for (int i = n-2 ; i >= 0 ; i--) 
		cnt[i] += cnt[i + 1]; 
	
	int ans = 0; 
	ss = 0; 
	
	// Calculating answer using original 
	// and cnt array. 
	for (int i = 0 ; i+2 < n ; i++) 
	{ 
		ss += a[i]; 
		if (ss == s) 
			ans += cnt[i + 2]; 
	} 
	return ans; 
} 

// Driver function 
int main() 
{ 
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	//cout << countways(a, n) << endl; 
	printf("%d\n",countways(a,n));
	return 0; 
} 
