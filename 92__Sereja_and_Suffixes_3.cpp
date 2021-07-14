#include <bits/stdc++.h>
using namespace std;
#define vc vector
#define int int64_t
#define pb push_back
#define gh cout << endl
#define PII pair<int,int>
#define all(x) x.begin(),x.end()
string sp=" ";// INT_MAX INT_MIN
#define fo(i,k,n) for(int i=k;i<=n;i++)
#define W(x) cout<<'['<<(#x)<<" : "<<(x)<<"]"<<sp;
#define Display(A) cout<<(#A)<<" : ";fo(i,0,A.size()-1){cout << A[i] << sp;}gh;
vc<int>soe(int n){vc<int>p(n+1,1),m; for(int i=2;i<=n;i++)if(p[i] && i*i<=n)for(int j=i*i;j<=n;j+=i)p[j]=0; for(int i=2;i<=n;i++)if(p[i])m.pb(i);return m;}




int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);
  ios::sync_with_stdio(0);cout.tie(0);
  int test=1;//cin >> test;
  fo(tc,1,test){
    int n,m;
    cin >> n >> m;
    vc<int>a(n),pk(n,0);
    fo(i,1,n)cin >> a[i-1];
    set<int>sk;
    for(int i=n-1;i>=0;i--){
      sk.insert(a[i]);
      pk[i]=sk.size();
    }
    // Display(pk);
    fo(i,1,m){
      int L;cin >> L;
      cout << pk[L-1] << endl;
    }
  }
}