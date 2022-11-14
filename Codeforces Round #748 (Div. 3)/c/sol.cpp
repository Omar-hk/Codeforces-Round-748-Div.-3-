#include <bits/stdc++.h>

using namespace std;
 
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
 
 /*
 
12 11
  5 6 
                  
                



res = 4

 */
#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()
 
const int mod = 1e9 + 7;
const int inf = 1e9;


bool solve()
{
    int n,k;
    cin >> n >> k;
    vector<int> a(k);
    for(int i = 0; i < k; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end(),greater<int>());

    int p = 0 , ct = 0;

    for(int  i = 0; i < k; i++)
    {
        
        cerr << p << gp;
        if(p < a[i])
        {
            p+= (n - a[i]);
            ct++;
        }
        else
        {
            break;
        }
    }
    
    cout << ct << ed;

   return true;
}

int32_t main()
{
    int tt;
    cin>>tt;
    while(tt--)
    
       solve();
    
    return 0;
}