#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 string yes="YES\n",no="NO\n",sp=" ";
#define fo(i,k,n) for(int i=k;i<=n;i++)
#define rfo(i,n,k)  for(int i=n;i>=k;i--)
#define vc vector
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define sz(a) (int)a.size()
#define Ans(f) cout<<(f?yes:no) 
#define all(x) x.begin(),x.end()
#define I(x,y)cout<<'['<<(#x)<<" : "<<(x)<<"]"<<sp<<'['<<(#y)<<" : "<<(y)<<"]"<<sp
#define W(x) cout<<'['<<(#x)<<" : "<<(x)<<"]"<<sp
void nk(){cout<<endl;}void cas(int tt){cout<<"Case #"<<tt<<":"<<sp;}

const int mod = 1e9+7,N=2e5+5;const ll LL_max = 1e18+5;
string s;
void File(){
#ifndef ONLINE_JUDGE
  freopen("C:\\nk\\cp\\I","r",stdin);
  freopen("C:\\nk\\cp\\O","w",stdout);
#endif
}

int main(){
  ios::sync_with_stdio(0);ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);//
  File();
  int Test=1;//cin >> Test;
  fo(T,1,Test){//cas(T);
    cin >> s;
    vc<int>a;
    fo(i,0,s.length()-1)if(s[i]!='+')a.pb(s[i]-'0');
    sort(all(a));
    fo(i,0,sz(a)-1){
    	cout << a[i];
    	if(i!=sz(a)-1)cout << "+" ;
    }
    cout << endl;
  }
  return 0;
}