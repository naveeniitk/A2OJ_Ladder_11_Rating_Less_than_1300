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
    int n;
    cin >> n;
    vc<int>a(n);
    fo(i,1,n)cin >> a[i-1];
    int ans=0;
    fo(i,0,n-1){
      fo(j,i,n-1){
        int cnt = 0;
        fo(k,i,j){
          cnt = cnt + ((1-a[k])==1);
        }
        int one = 0;
        fo(p,0,i-1)if(a[p]==1)one++;
        fo(p,j+1,n-1)if(a[p]==1)one++;
        ans = max(ans,cnt+one);
      }
    }
    cout << ans << endl;
  }
}
/*

#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,e=-1,f;
int main()
{
  cin>>a;
  for (int i=0 ;i<a ;i++)
  {
    cin>>b;
    c+=b;
    d+=1-b*2;
    e = max(e,d-f);
    f = min(f,d);
  }
  cout<<e+c;
}

*/