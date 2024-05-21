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
    string s;
    cin>>n>>s;
    ll v=0,h=0;
    for(auto i:s){
        if(i=='N') v++;
        else if(i=='S') v--;
        else if(i=='E') h++;
        else h--;
    }
    string a;
    if(v%2!=0 Or h%2!=0) cout<<"NO\n";
    else{
        v=0,h=0;
        ll v1=0,h1=0;
        for(auto i:s){
            if(i=='N' Or i=='S'){
                if(v1%2==0) a.push_back('R');
                else a.push_back('H');
                if(i=='N') v++;
                else v--;
                v1++;
            }
            else{
                if(h1%2==0) a.push_back('H');
                else a.push_back('R');
                if(i=='E') v++;
                else v--;
                h1++;
            }
        }
        if((v1==2 And h1==0 And v==0) Or (h1==2 And v1==0 And h==0)) cout<<"NO\n";
        else cout<<a<<"\n";
    }
}
int main(){
    ios::sync_with_stdio(false),cin.tie(0);
    ll tst;
    cin>>tst;
    while(tst--) solve();
}