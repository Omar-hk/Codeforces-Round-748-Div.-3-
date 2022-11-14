#include <bits/stdc++.h>


using namespace std;
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
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, c, i, j, ans, k, d, l, p, p1, c1;

    cin>>t;

    for(;t--;)
    {
        cin>>n;

        ll a[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a, a+n);

        ans=0;

        for(i=0; i<n;)
        {
            c=0;
            j=i;

            while(i<n && a[i]==a[j])
            {
                c++;
                i++;
            }
            if(c>=(n/2)){
                ans=-1;
                break;
            }
        }

        if(ans==-1){
            cout<<ans<<"\n";
            continue;
        }

        for(i=0; i<n; i++)
        {
            c=1;
            for(j=i+1; j<n; j++)
            {

                if(a[j]==a[i]){
                    c++;
                    continue;
                }
                k=a[j]-a[i];

                for(p=1; p*p<=k; p++)
                {
                    if(p>1){
                        c1=c+1;
                        if((k%p)==0){

                            for(l=j+1; l<n; l++)
                            {
                                if(((a[l]-a[i])%p)==0)
                                {
                                    c1++;
                                }
                            }
                            if(c1>=(n/2)){
                                ans=max(ans, p);
                            }
                        }
                    }

                    p1=k/p;

                    if(p1!=p){
                        if((k%p1)==0){
                            c1=c+1;
                            for(l=j+1; l<n; l++)
                            {
                                if(((a[l]-a[i])%p1)==0)
                                {
                                    c1++;
                                }
                            }
                            if(c1>=(n/2)){
                                ans=max(ans, p1);
                            }
                        }
                    }
                }
            }
        }

        cout<<ans<<"\n";
    }
}
