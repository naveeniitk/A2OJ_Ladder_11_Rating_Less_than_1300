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

vc<int> sieve_of_eratosthenes(int n){
    vc<bool>prime(n+1,1);
    prime[0]=prime[1]=0;
    for(int i=2;i<=n;i++){
        if(prime[i] && i*i<=n){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=0;
            }
        }
    }
    vc<int>primes;
    for(int i=0;i<=n;i++){
        if(prime[i])primes.pb(i);
    }
    return primes;
}

int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);
  ios::sync_with_stdio(0);cout.tie(0);
  int test=1;//
  cin >> test;
  map<int,int>mp;
  vc<int>prime=sieve_of_eratosthenes(1000001);
  for(auto I:prime)mp[I*I]++;
  fo(tc,1,test){
    int n; cin >> n;
    if(mp[n]==1)cout << "YES";
    else cout << "NO";
    cout << endl;
  }
}