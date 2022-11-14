#include <bits/stdc++.h>


using namespace std;
#define Ios_Base ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ff               first
#define ss               second
#define pb               push_back
#define all(x)           (x).begin(), (x).end()
#define fore(i, a, b)    for (int i = a; i < b; i++)
#define rep(i,a,b)         for(int i = a; i < b; ++i)
#define mem0(x)          memset(x, 0, sizeof (x))
#define mem1(x)          memset(x, -1, sizeof (x))
#define cel              cout << "\n";
#define dbgA(X)          for(auto i: X) cout << i << " "; cel
#define dbg(x)          cout << x; cel
#define endl '\n'


const int MAXn = 4e1 + 5;
int a[MAXn] , n;
 
int GCD(int a , int b){
    if(b == 0){
        return a;
    }
    
    return GCD(b , a % b);
}
 
void solve(){
    cin >> n;
    
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    
    sort(a , a + n);
    
    int MAX = 0;
    for(int i = 0 ; i < n - 1 ; i ++){
        MAX = GCD(MAX , abs(a[i + 1] - a[i]));
    }
    
    if(MAX == 0){
        cout << -1 << endl;
        
        return;
    }
    
    cout << MAX << endl;
}
int32_t main()
{
    Ios_Base;
    int tt;
    cin >> tt;
    while(tt--)
    {
       solve();
    }

    return false;
}