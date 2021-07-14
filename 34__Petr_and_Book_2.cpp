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
#define Time cerr << "Time elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";

const int mod = 1e9+7,N=2e5+5;const ll LL_max = 1e18+5;

int main(){
  ios::sync_with_stdio(0);ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);//File();
  int Test=1;//cin >> Test;
  fo(T,1,Test){//cas(T);
    int n;
    cin >> n;
    int a[7];
    for(int i=0;i<=6;i++)cin >> a[i];
    int sum=0,ans=-1;
    fo(i,0,1002*7){
      int id=i%7;
      sum+=a[id];
      if(sum <0 || sum>=n){
        ans=id;
        break;
      }
    }
    cout << ans+1 << endl;
  }
  Time;return 0;
}
