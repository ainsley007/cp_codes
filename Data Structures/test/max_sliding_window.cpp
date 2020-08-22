#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i] ;
    int m;
    cin >> m;
    if(m==1)
    {
        for(int i=0;i<n;i++)
            cout << arr[i] << " "; 

        return 0;  
    }
    
    int ans[n-m+1];
    priority_queue <int> a;

    for(int i=0;i<m;i++)
        a.push(arr[i]);

    int j=0;
    ans[j] = a.top();
    for(int i=m;i<n;i++)
    {
        a.push(arr[i]);
        if(a.top() == arr[j])
        {
            a.pop();
            ans[j+1] = a.top();
        }
        else
        {
            ans[j+1] = a.top();
        }
        j++;
    }
    for(int i=0;i<n-m+1;i++)
        cout << ans[i] << " ";
    return 0;
}