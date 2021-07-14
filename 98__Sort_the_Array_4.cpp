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
    vc<int>a(n),b(n);
    fo(i,1,n){
      cin >> a[i-1];
      b[i-1]=a[i-1];
    }
    sort(all(b));
    int L = 1, R = n;
    while(L<=n && b[L-1]==a[L-1])L++;
    while(R>0 && b[R-1]==a[R-1])R--;
    // W(L);W(R);gh;
    if(R==0 && L==n+1){
      cout << "yes" << "\n1 1\n" ;continue;
    }
    vc<int>sub;
    fo(i,L-1,R-1)sub.pb(a[i]);
    sort(all(sub));
    reverse(all(sub));
    bool possible = 1;
    fo(i,L-1,R-1){
      if(a[i]!=sub[i-L+1])possible=0;
    }
    if(!possible){
      cout << "no" << endl;continue;
    }
    cout << "yes" << endl;
    cout << L << " " << R << endl;
  }
}