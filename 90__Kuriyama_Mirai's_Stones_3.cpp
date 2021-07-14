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



int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);
  ios::sync_with_stdio(0);cout.tie(0);
  int test=1;//cin >> test;
  fo(tc,1,test){
    int n, q;
    cin >> n; 
    vc<int>a(n),b(n+1,0),c(n+1,0),d(n,0);
    fo(i,1,n)cin >> a[i-1], d[i-1] = a[i-1];
    sort(all(d));
    b[1]=a[0]; 
    c[1]=d[0];
    fo(i,2,n)b[i]=b[i-1]+a[i-1];
    fo(i,2,n)c[i]=c[i-1]+d[i-1];
    cin >> q;
    fo(i,1,q){
      int ty,l,r;
      cin >> ty >> l >> r;
      if(ty==1){
        cout << b[r]-b[l-1] << endl;
      }
      if(ty==2){
        cout << c[r]-c[l-1] << endl;
      }
    }
  }
}