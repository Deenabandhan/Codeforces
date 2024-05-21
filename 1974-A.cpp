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
ll solve(ll i){
    ll x,y,a,b,c;
    cin>>x>>y;
    //if(i==1502) cout<<x<<" "<<y<<"\n";
    a=(y/2)+(y%2==1);
    if(y%2==1) y=7*a+4;
    else y=7*a;
    if(x<y) return(a);
    else{
        x-=y;
        c=(x/15)+1-(x%15==0);
        return(c+a);
    }
}
int main(){
    ios::sync_with_stdio(false),cin.tie(0);
    ll tst;
    cin>>tst;
    ll ar[tst],i=0;
    while(i<tst) ar[i]=solve(i),i++;
    for(int i=0;i<tst;i++) cout<<ar[i]<<"\n";
}