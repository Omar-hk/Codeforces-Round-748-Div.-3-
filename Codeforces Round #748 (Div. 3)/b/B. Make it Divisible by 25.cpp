#include <bits/stdc++.h>

#define long long long
#define Integer_MAX_VALUE 0x7fffffff
#define Integer_MIN_VALUE 0x80000000
#define Long_MAX_VALUE 0x7fffffffffffffffL
#define Long_MIN_VALUE 0x8000000000000000L

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int tt;
    cin>>tt;
    while(tt--)
    {
        int res;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        for(int j=i+1;j<s.size();j++){
            if(((s[i]-'0')*10+(s[j]-'0'))%25==0) 
            res = s.size()-i-2;
        }
    cout<<res<<endl;
    }
    return 0;
}
