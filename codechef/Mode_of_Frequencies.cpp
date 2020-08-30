#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];

        int freq[11] = {0};
        for(int i=0;i<n;i++)
        {
            freq[a[i]]++;
        }
        int mode[10001] = {0};
        for(int i=0;i<11;i++)
        {
            if(freq[i] != 0)
                mode[freq[i]]++;
        }
        int m = *max_element(mode, mode + 10001);
        int ans;
        for(int i=0;i<10001;i++)
        {
            if(mode[i] == m)
            {
                cout << i << endl;
                break;
            }
        }
        
    }
    return 0;
}