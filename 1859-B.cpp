#include<bits/stdc++.h>
using namespace std;
#include <string>
#define ll long long int
#define ld long double
#define And &&
#define Or ||
#define Not(a) ~(a)
ll fact(ll n)          { if(n==0) return 1; ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; }
ll nPr(ll n, ll r)     { return fact(n) / fact(n - r); }
ll nCr(ll n, ll r)     { return fact(n) / (fact(r) * fact(n - r)); }
ll gcd(ll a, ll b)     { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b)     { return (a * b) / gcd(a, b);}
ll mypow(ll a, ll b)   { ll ans = 1; while(b){ if (b&1) ans = (ans*a) ; b /= 2; a = (a*a); } return ans; }
bool isPrime(ll n)     { if(n <= 1) return false; for(ll i = 2; i <= sqrt(n); i++) if(n % i == 0) return false; return true; }
bool isPal(string s)   { ll n=s.length(); for(ll i=0;i<n/2;i++) if(s[i]!=s[n-1-i]) return(false); return true;}
bool isSame(string s)  { ll n=s.length(); for(ll i=1;i<n;i++) if(s[i]!=s[0]) return(false); return(true);}
#define rm (ll)pow(10,9)+7
#define vector std::vector
#define set std::set
#define string std::string
void solve(){
    ll nd;
    cin>>nd;
    vector<pair<ll,ll>> v(nd);
    ll m=INT_MAX,mi=0,s=0,m1=INT_MAX,mu=0,s1;
    for(int i=0;i<nd;i++){
        ll n;
        cin>>n;
        vector<ll> tp(n);
        for(auto &i:tp) cin>>i;
        sort(tp.begin(),tp.end());
        v[i]={tp[0],tp[1]};
        s+=tp[1];
        if(m>tp[0]) m=tp[0],mi=i;
        if(m1>tp[1]) m1=tp[1],mu=i;
    }
    s1=s;
    s1-=v[mu].second;
    s1+=v[mi].first;
    s+=v[mi].first;
    s-=v[mi].second;
    cout<<max(s,s1)<<"\n";
}
int main(){
    ios::sync_with_stdio(false),cin.tie(0);
    ll tst;
    cin>>tst;
    while(tst--) solve();
}