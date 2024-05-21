// Problem is not solved yet
// Logical error
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
bool slv(ll n,ll m,ll k,ll i,vector<ll> a,vector<ll> b){
    ll g=0;
    vector<ll> tp;
    for(int j=0;j<m;j++) tp.push_back(a[i+j]);
    sort(tp.begin(),tp.end());
    ll u=lower_bound(tp.begin(),tp.end(),b[0])-tp.begin();
    for(int j=u;j<m;j++){
        cout<<tp[j]<<" "<<b[j]<<"\n";
        if(tp[j]==b[j-u]) g++;
    }
    cout<<g<<" ";
    return(g>=k);
}
void solve(){
    ll n,m,k,ans=0;
    cin>>n>>m>>k;
    vector <ll> a(n),b(m);
    for(auto &i:a) cin>>i;
    for(auto &i:b) cin>>i;
    sort(b.begin(),b.end());
    for(int i=0;i<=n-m;i++) if(slv(n,m,k,i,a,b)) ans++;
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false),cin.tie(0);
    ll tst;
    cin>>tst;
    while(tst--) solve();
}