#include<bits/stdc++.h>
using namespace std;
int comp(int arr[], int n)
{
        for(int i=1;i<n-1;i++)
        {
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
            {
                 return i;
            }
        }
        return 0;
}
int  main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];

        int res = comp(arr, n);
        if(res != 0)
        {
            cout << "YES" << endl;
            cout << res << " "<< res+1 << " " << res+2 <<endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
}