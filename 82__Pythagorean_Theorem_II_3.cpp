#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
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
 string yes="YES\n",no="NO\n",sp=" ";

void cas(int tt){cout<<"Case #"<<tt<<":"<<sp;}
void nk(ll p){for(int i=1;i<=p;i++)cout << endl;}
const int I_max = INT_MAX;const ll L_max = 1e18+5,mod = 1000000007,MOD=1e9+7;
#define stringToLower(str)  transform(all(str), str.begin(), ::tolower);
#define stringToUpper(str)  transform(all(str), str.begin(), ::toupper);
#define noOfDigits(n)  (1+floor(log10(n)))
#define isOn(S, hem) (S & (1 << hem))
#define setBit(S, hem) (S |= (1 << hem))
#define clearBit(S, hem) (S &= ~(1 << hem))
#define toggleBit(S, hem) (S ^= (1 << hem))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1 << n) - 1)
#define modulo(S, N) ((S) & (N - 1))   // returns S % N, where N is arr power of 2
#define isPowerOfTwo(S) (!(S & (S - 1)))
#define nearestPowerOfTwo(S) ((int)pow(2.0, (int)((log((double)S) / log(2.0)) + 0.5)))
#define turnOffLastBit(S) ((S) & (S - 1))
#define turnOnLastZero(S) ((S) | (S + 1))
#define turnOffLastConsecutiveBits(S) ((S) & (S + 1))
#define turnOnLastConsecutiveZeroes(S) ((S) | (S - 1))
#define posOfFirstSetBit(n) (log2(n & -n) + 1);

#define EPS 1e-9
#define ar array
#define fi first
#define se second
#define Vc vector
#define mp make_pair 
#define pb push_back
#define sz(a) (int)a.size()
#define ans_yn(f) cout<<(f?yes:no) 
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pi 3.1415926535897932384626433832795
#define arsort(a) sort(a,a+n,rev)
#define rsort(v) sort(all(v)),reverse(all(v))
#define fo(i,k,n) for(int i=k;i<=n;i++)
#define Fo(i,k,n) for(ll i=k;i<=n;i++)
#define rfo(i,n,k)  for(int i=n;i>=k;i--)
#define Rfo(i,n,k)  for(ll i=n;i>=k;i--)
#define W(x) cout<<'['<<(#x)<<" : "<<(x)<<"]"<<sp
#define I(x,y)cout<<'['<<(#x)<<" : "<<(x)<<"]"<<sp<<'['<<(#y)<<" : "<<(y)<<"]"<<sp
#define Time cerr << "Time elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
#define set_pre(Ans, num) fixed << setprecision(num) << (Ans)
#define mem1(a) memset(a,-1,sizeof(a))
#define mem0(a) memset(a,0,sizeof(a))
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll
bool rev(int a,int b){return a>=b;}

ll GCD(ll arr, ll b) { return((!b) ? arr : GCD(b, arr%b)); }
ll LCM(ll arr, ll b) { return arr / (GCD(arr, b))*b; }
ll nCr(ll n, ll r) { if (n<r)return 0; if (r == 0)return 1; return n*nCr(n - 1, r - 1) / r; }
ll PowMod(ll bs, ll ex, ll M) { if (!ex)return 1; ll p = PowMod((bs*bs) % M, ex >> 1, M); return(ex & 1) ? (p*bs) % M : p; }
ll fastpow(ll b, ll e) { if (!e) return 1; if (e & 1) return b * fastpow(b, e - 1); ll x = fastpow(b, e / 2); return x * x; }
ll ModInverse(ll arr) { return PowMod(arr, MOD - 2, MOD); }
ll ExtGCD(ll arr, ll b, ll& x, ll& y){if(!b){x=1;y=0;return arr;} ll r=ExtGCD(b,arr%b,y,x);y-=arr/b*x;return r;}
ll mult(ll arr, ll b) { return(1LL * arr * b) % MOD; }
ll SumOfOdd(ll l, ll r) { ll Rsm = (r + 1) / 2; Rsm *= Rsm; l--; ll Lsm = (l + 1) / 2; Lsm *= Lsm; return Rsm - Lsm; }
ll NoOfOdd(ll L, ll R) { ll N = (R - L) / 2; if (R % 2 != 0 || L % 2 != 0)N++; return N; }
ll NoOfEven(ll L, ll R) { return((R - L + 1) - NoOfOdd(L, R)); }
ll fac[1000001]; void factorial(){ ll MOD=1e9+7;fac[0] = 1;for (ll i = 1; i < 1000001; i++)fac[i] = (fac[i - 1]%MOD * (i%MOD)) % MOD;} 
vector<int>Intersection(VI &v1,VI&v2){VI v3;sort(all(v1));sort(all(v2));set_intersection(all(v1),all(v2),back_inserter(v3));return v3;}
vector<int>Union(VI &v1,VI&v2){VI v3;sort(all(v1));sort(all(v2));set_union(all(v1),all(v2),back_inserter(v3));return v3;}

template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.fi>>a.se;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.fi<<" "<<a.se;return out;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

void File(){
#ifndef ONLINE_JUDGE
  freopen("C:\\nk\\cp\\I","r",stdin);
  freopen("C:\\nk\\cp\\O","w",stdout);
#endif
}
/*************************************************************************/
const int Z = 2e5 + 5;


void solve(){//File();
	int n;
	cin >> n;
	int ans=0;
	fo(i,1,n){
		for(int j=i;j<=n;j++){
			int k=i*i+j*j;
			int p = sqrt(k);
			if(p>j && p<=n && p*p==k){
				ans++;
				// I(i,j);I(p,k);nk(1);
			}
		}
	}
	cout << ans << endl;
}

int main(){
  ios_base::sync_with_stdio(0);cin.tie(0);
  ios::sync_with_stdio(0);cout.tie(0);
  int Test=1;//cin >> Test;
  fo(T,1,Test){//cas(T);
    solve();
  }
  //Time;
  return 0;
}


/*

#include<stdio.h>
#include<stack>
#include<vector>
struct triple
{
    int a,b,c;
};
using namespace std;
int func(int m)
{
    int count=0;
    stack < struct triple > pyth ;
    struct triple temp;
    temp.a=3;
    temp.b=4;
    temp.c=5;
    pyth.push(temp);
    while(pyth.size()!=0)
    {
	int aa,bb,cc;
	aa=pyth.top().a;
	bb=pyth.top().b;
	cc=pyth.top().c;
	count=count+(m/cc);
	pyth.pop();
	temp.a=aa-2*bb+2*cc;
	temp.b=2*aa-bb+2*cc;
	temp.c=2*aa-2*bb+3*cc;
	if(temp.c<=m && temp.a<=m && temp.b<=m)
	    pyth.push(temp);
	temp.a=aa+2*bb+2*cc;
	temp.b=2*aa+bb+2*cc;
	temp.c=2*aa+2*bb+3*cc;
	if(temp.c<=m && temp.a<=m && temp.b<=m)
	    pyth.push(temp);
	temp.a=2*(bb+cc)-aa;
	temp.b=bb+2*cc-2*aa;
	temp.c=2*bb+3*cc-2*aa;
	if(temp.c<=m && temp.a<=m && temp.b<=m)
	    pyth.push(temp);
    }
    return count;
}
int main()
{
	int n,m;
	scanf("%d",&n);
	printf("%d\n",func(n));
    return 0;
}

               

*/

