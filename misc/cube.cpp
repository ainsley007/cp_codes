#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif

    int n;
    cin >> n;
    char bricks[n][n],t_bricks[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> bricks[i][j];
            t_bricks[i][j] = bricks[i][j];
        }
    }

    int dp[n+1][n+1], dp_S[n+1][n+1];
    int arr[n][n];

    for(int i=0;i<n+1;i++)
    {
        dp[0][i] = 0;
        dp_S[0][i] = 0;    
    }
    for(int i=0;i<n+1;i++)
    {
        dp[i][0] = 0;
        dp_S[i][0] = 0;   
    }
    //editing bricks to relocate c & d
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<n;j++)
        {
            if(bricks[i][j] == 'D' && bricks[i-1][j] == 'C')
            {
                bricks[i][j] = 'D';
                bricks[i-1][j] = 'C';
            }
        }
    }
    //creating array of 0 & 1 for dp table
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(bricks[i][j] == 'D')
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }

    //max for 1 postion
    int ma = 0;

    //creating dp table 1
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(arr[i-1][j-1] == 0)
                dp[i][j] = 0;
            else
            {
                dp[i][j] = min(dp[i-1][j-1], min(dp[i][j-1],dp[i-1][j])) + 1;
            }
            
            if(dp[i][j] > ma)
                ma = dp[i][j];
        }
    }
    
    

    //rotating bricks
    for (int i = 0; i < n / 2; i++) { 
        for (int j = i; j < n - i - 1; j++) { 
  
            // Swap elements of each cycle 
            // in clockwise direction 
            char temp = t_bricks[i][j]; 
            t_bricks[i][j] = t_bricks[n - 1 - j][i]; 
            t_bricks[n - 1 - j][i] = t_bricks[n - 1 - i][n - 1 - j]; 
            t_bricks[n - 1 - i][n - 1 - j] = t_bricks[j][n - 1 - i]; 
            t_bricks[j][n - 1 - i] = temp; 
        } 
    } 
    //check
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout << t_bricks[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    //editing rotated bricks
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(t_bricks[i][j] == 'C' && t_bricks[i-1][j] == 'D')
            {
                t_bricks[i][j] = 'D';
                t_bricks[i-1][j] = 'C';
            }
        }
    }
    // cout << "\n";
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout << t_bricks[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    //create arrray of 0 & 1 for rot. bricks
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(t_bricks[i][j] == 'D')
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = 0;
            }
            
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    int max1 = 0;
    //dp table 2
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(arr[i-1][j-1] == 0)
                dp_S[i][j] = 0;
            else
            {
                dp_S[i][j] = min(dp_S[i-1][j-1], min(dp_S[i][j-1],dp_S[i-1][j])) + 1;
            }

            if(dp_S[i][j] > max1)
                max1 = dp_S[i][j];
            
        }
    }
    
   // cout << ma <<" "<< max1 << endl;
   // cout << max(ma,max1);



}