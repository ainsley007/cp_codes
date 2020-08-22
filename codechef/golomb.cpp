#include "bits/stdc++.h" 
#define MAX 100001 
using namespace std; 
void printGolombSequence(long N,long l) 
{ 

	long long arr[MAX]; 

	long long cnt = 0; 

	arr[0] = 0; 
	arr[1] = 1; 

	map<long long ,	long long> M; 

	M[2] = 2; 

	for (int i = 2; i <= N; i++) { 
 
		if (cnt == 0) { 
			arr[i] = 1 + arr[i - 1]; 
			cnt = M[arr[i]]; 
			cnt--; 
		} 

		else { 
			arr[i] = arr[i - 1]; 
			cnt--; 
		} 
		M[i] = arr[i]; 
	} 
	long long sum = 0;
	long long m = 1000000007;
	
	for (int i = l; i <= N; i++) { 
		sum = (sum + arr[i]*arr[i])%m; 
	} 
	cout << sum << endl;
} 


int main() 
{ 
	long long t;
	cin >> t;
	while(t--){
			long long l,n;
			cin >> l >> n; 
			printGolombSequence(n,l); 

	}
	return 0; 
} 
