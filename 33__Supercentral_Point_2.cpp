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
    vc<pii>a(n);
    fo(i,0,n-1)cin >> a[i].first >> a[i].second;
    map<pii,int>map_pair;
    map<int,int>map_x,map_y;
    sort(all(a));
    fo(i,0,n-1){
      map_pair[a[i]]++;
      map_x[a[i].first]++;
      map_y[a[i].second]++;
    } 
    int ans=0;
    fo(j,0,n-1){
      int x=a[j].first, y=a[j].second;
      if(map_x[x]>=3 && map_y[y]>=3){
        int lx=-10000,ux=-10000,ly=-10000,uy=-10000;
        fo(i,0,n-1){
          if(a[i].first>x)break;
          if(a[i].first==x){
            if(lx==-10000)lx=a[i].second;ux=a[i].second;
          }
        }
        fo(i,0,n-1){
          // if(a[i].second>y)break;
          if(a[i].second==y){
            if(ly==-10000)ly=a[i].first;uy=a[i].first;
          }
        }
        if(lx<a[j].second && ux>a[j].second && ly<a[j].first && uy>a[j].first)ans++;
      }      
    }
    cout << ans << endl;
  }
  Time;return 0;
}
