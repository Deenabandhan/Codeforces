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
    ll n;
    cin>>n;
    vector<ll> v,ve(n);
    set<ll> v1;
    map<ll,vector<ll>> mp0,mp1;
    ll x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
        v1.insert(x/4);
        mp0[x/4].push_back(v[i]);
        mp1[x/4].push_back(i);
    }
    //for(auto i:mp0) sort(i.second.begin(),i.second.end());
    for(auto i:v1){
        //cout<<i<<" ";
        sort(mp0[i].begin(),mp0[i].end());
        for(int j=0;j<mp0[i].size();j++){
            ve[mp1[i][j]]=mp0[i][j];
        }
    }
    for(auto i:ve) cout<<i<<" ";
    cout<<"\n";
}
int main(){
    ll tst;
    cin>>tst;
    while(tst--) solve();
}