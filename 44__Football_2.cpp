#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 string yes="YES\n",no="NO\n",sp=" ";
#define fo(i,k,n) for(int i=k;i<=n;i++)
#define rfo(i,n,k)  for(int i=n;i>=k;i--)
#define fi first
#define se second
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
#define Time cerr << "Time elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";

const int mod = 1e9+7,N=2+5;const ll LL_max = 1e18+5;


int main(){
  ios::sync_with_stdio(0);ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);//File();
  int Test=1;//cin >> Test;
  fo(T,1,Test){//cas(T);
    int n;
    cin >> n;
    vc<string>a(n);
    fo(i,1,n)cin>>a[i-1];
    map<string,int>mapp;
    fo(i,1,n)mapp[a[i-1]]++;
    set<string>sk;
    fo(i,1,n)sk.insert(a[i-1]);
    auto it=sk.begin();
    if(sk.size()==1){
      cout << *it << endl;
    }
    vc<string>teams;
    for(it;it!=sk.end();it++)teams.pb(*it);
    string ans="";
    int fre=0;
    fo(i,1,n){
      if(mapp[a[i-1]]>fre){
        ans=a[i-1];
        fre=mapp[a[i-1]];
      }
    }
    cout << ans << endl;
  }
  Time;return 0;
}
  