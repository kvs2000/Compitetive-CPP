#include<bits/stdc++.h>
    using namespace std;
    #define inp(k)           ll k;cin>>k;
    #define in2(n,k)       ll n, k; cin>>n;cin>>k;
    #define in3(n,k,r)       ll n, k,r; cin>>n;cin>>k;cin>>r;
    #define ll long long int
    #define dl double
    #define ch char
    #define f(i,a,b) for(ll i=a;i<b;i++)
    #define rf(i,a,b) for(ll i=a-1;i>=b;i--)
    #define Godspeed                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define vpl vector< pair<ll,ll> >
    #define vpi vector< pair<int,int> >
    #define vi vector<int>
    #define vl vector<ll>
    #define vdl vector<dl>
    #define vch vector<char>
    #define pb push_back
    #define mp make_pair
    #define fr first
    #define se second
    #define PI 3.14159265
const ll N = 500005;
const ll modls = 1e9 + 7;

ll powermodls(ll x, ll y, ll m)
{
    ll res = 1;
    x = x % m;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % m;
        y = y >> 1;
        x = (x * x) % m;
    }
    return res;
}

int32_t main() {
    Godspeed;
    ll test;
    cin >> test;

    while (test--) {
        inp(n);
        ll ans=INT_MAX;
        ll a[n];
        f(i,0,n)cin>>a[i];
        ll m=INT_MIN;
        ll mi;
        ll mn=INT_MAX;
        ll mni;
        f(i,0,n)
        {
            if(a[i]>m)
            {
                m=a[i];mi=i;
            }
            if(a[i]<mn)
            {
                mn=a[i];mni=i;
            }
        }
        //cout<<mni<<" "<<mi<<endl;
        if(mni<mi)
        {
            ans=min(ans,mni+1+n-mi);
            ans=min(ans,n-mni);
            ans=min(ans,mi+1);
        }
        else
        {
            ans=min(ans,mi+1+n-mni);
            ans=min(ans,n-mi);
            ans=min(ans,mni+1);
        }
        cout<<ans<<endl;
        
    }

    return 0;
}
