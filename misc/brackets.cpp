#include<bits/stdc++.h>
#define MAX 1000002
using namespace std;
int  main()
{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif
    
    stack <char> s;
    stack<int>p;
    string str;
    cin >> str ;
    for(int i=0;i<str.size();i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
		{
			s.push(str[i]);
            p.push(i+1);
		}
        
    }

    // while(!s.empty())
    // {
    //     cout << s.top() << " " << p.top() << "\n";
    //     s.pop();
    //     p.pop();
    // }
    

}