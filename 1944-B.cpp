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
    ll n,k;
    cin>>n>>k;
    vector<ll> v(2*n),l,r,o;
    vector<ll> mp(n,0);
    for(int i=0;i<2*n;i++){
        cin>>v[i];
        if(i<n) mp[v[i]-1]++;
    }
    for(int i=0;i<n;i++){
        if(mp[i]==0) r.push_back(i+1),r.push_back(i+1);
        if(mp[i]==2) l.push_back(i+1),l.push_back(i+1);
        if(mp[i]==1) o.push_back(i+1);
    }
    if(l.size()>2*k){
        ll n1=l.size();
        for(int i=0;i<n1-2*k;i++) l.pop_back(),r.pop_back();
    }
    if(l.size()<2*k){
        ll n1=l.size();
        for(int i=0;i<2*k-n1;i++) {
            //cout<<o[i]<<" ";
            l.push_back(o[i]);
            r.push_back(o[i]);
        }
    }
    for(auto i:l) cout<<i<<" ";
    cout<<"\n";
    for(auto i:r) cout<<i<<" ";
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false),cin.tie(0);
    ll tst;
    cin>>tst;
    while(tst--) solve();
}