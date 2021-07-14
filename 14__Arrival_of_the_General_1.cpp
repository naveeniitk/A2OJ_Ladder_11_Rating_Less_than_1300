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

const int mod = 1e9+7,N=1e2+5;const ll LL_max = 1e18+5;
void File(){
#ifndef ONLINE_JUDGE
  freopen("C:\\nk\\cp\\I","r",stdin);
  freopen("C:\\nk\\cp\\O","w",stdout);
#endif
}

int n,a[N],ans=0;

int main(){
  ios::sync_with_stdio(0);ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);//
  File();
  int Test=1;//cin >> Test;
  fo(T,1,Test){//cas(T);
  	cin >> n;
  	fo(i,1,n)cin >> a[i];
  	int min_id=-1,max_id=-1;
  	int minn=*min_element(a+1,a+n+1);
  	int maxx=*max_element(a+1,a+n+1);
  	if(a[1]==maxx && a[n]==minn){
  		cout << 0 << endl;
  		continue;
  	}
  	fo(i,1,n){
  		if(a[i]==minn)min_id=i;
  		if(a[i]==maxx && max_id==-1)max_id=i;
  	}
  	if(min_id>=max_id)ans+=abs(n-min_id)+max_id-1;
  	else if(min_id<max_id)ans+=abs(n-min_id)+max_id-2;
  	cout << ans << endl;
  }
  return 0;
}
