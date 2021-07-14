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
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    vc<int>dp(n+1,-1);
    dp[0]=0;
    fo(i,1,n){
      if(i>=a)dp[i]=max(dp[i],dp[i-a]);
      if(i>=b)dp[i]=max(dp[i],dp[i-b]);
      if(i>=c)dp[i]=max(dp[i],dp[i-c]);
      if(dp[i]!=-1)dp[i]++;
    }
    // Display(dp);
    cout << dp[n] << endl;
  }
}