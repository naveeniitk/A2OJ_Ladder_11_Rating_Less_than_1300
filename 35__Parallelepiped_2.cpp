#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef long double ld;
typedef double db;
typedef pair<int,int> PII;
typedef pair<ll, ll> PLL;
typedef vector<int> VI;
typedef vector<ll> VLL;
typedef vector<VI> VVI;
typedef vector<PII> VPII;
typedef vector<PLL> VPLL;
typedef unordered_map<int, int> Umap_II;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef vector<VB> VVB;
typedef vector<VVB> VVVB;
typedef vector<db> VDB;
typedef set<int> SI;
typedef set<string> SS;
typedef map<int, int> Map_II;
typedef map<string, int> Map_SI;
typedef vector<PII> VPII;
typedef vector<VPII> VVPII;
#define ar array
#define fi first
#define se second
#define arsort(a) sort(a,a+n,rev)
#define rsort(v) sort(all(v)),reverse(all(v))
#define endl "\n"
bool rev(int a,int b){return a>=b;}
 string yes="YES\n",no="NO\n",sp=" ";
#define fo(i,k,n) for(int i=k;i<=n;i++)
#define rfo(i,n,k)  for(int i=n;i>=k;i--)
#define EPS 1e-9
#define vc vector
#define mp make_pair 
#define pb push_back
#define sz(a) (int)a.size()
#define Ans(f) cout<<(f?yes:no) 
#define all(x) x.begin(),x.end()
#define pi 3.1415926535897932384626433832795
#define W(x) cout<<'['<<(#x)<<" : "<<(x)<<"]"<<sp
#define I(x,y)cout<<'['<<(#x)<<" : "<<(x)<<"]"<<sp<<'['<<(#y)<<" : "<<(y)<<"]"<<sp
void nk(){cout<<endl;}void cas(int tt){cout<<"Case #"<<tt<<":"<<sp;}
const int I_max = INT_MAX;const ll L_max = 1e18+5,mod = 1000000007,MOD=1e9+7;
ll fac[1000001];
void factorial(){
  ll MOD=1e9+7;fac[0] = 1;for (ll i = 1; i < 1000001; i++)fac[i] = (fac[i - 1]%MOD * (i%MOD)) % MOD;
}
ll power(ll a,ll b, ll m=MOD){
  ll res=1;
  while(b>0){
    if(b&1)res=(res*a)%MOD;
    a=(a*a)%MOD;b>>=1;
  }
  return res;
}
ll inverse(ll a,ll m=MOD){return power(a,m-2,m);}
vector<bool> soe(int n){
  vector<bool> is_prime(n+1, true);
  for (int i = 2; i * i <= n; i++) {
    if (is_prime[i]){
      for (int j = i * i; j <= n; j += i)is_prime[j] = false;
    }
  }
  return is_prime;
}
/*************************************************************************/

const int N = 2e5 + 5;

ll edge(ll a){
  return sqrt(a);
}

int main(){
  ios::sync_with_stdio(0);ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);//File();
  int Test=1;//cin >> Test;
  fo(T,1,Test){//cas(T);
    ll ab,bc,ac;
    cin >> ab >> bc >> ac;
    ll a=(ab*ac)/bc;
    ll b=(bc*ab)/ac;
    ll c=(bc*ac)/ab;
    cout << 4*(edge(a)+edge(b)+edge(c)) << endl;
  }
  return 0;
}
