#include <bits/stdc++.h>
using namespace std;
#define vc vector
#define int int64_t
#define pb push_back
#define gh cout << endl
#define all(x) x.begin(),x.end()
string sp=" ";// INT_MAX INT_MIN
#define fo(i,k,n) for(int i=k;i<=n;i++)
#define W(x) cout<<'['<<(#x)<<" : "<<(x)<<"]"<<sp;
#define Display(A) cout<<(#A)<<" : ";fo(i,0,A.size()-1){cout << A[i] << sp;}gh;


int32_t main(){
  
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

  ios_base::sync_with_stdio(0);cin.tie(0);
  ios::sync_with_stdio(0);cout.tie(0);
  int test=1;//cin >> test;
  fo(tc,1,test){
  	int N, X;
  	cin>>N;
  	N*=2;
  	vc<int>B[5001];
  	fo(i,1,N){
  		cin >> X;
  		B[X].pb(i);
  	}
  	bool odd = 0;
  	fo(i,1,5000){
  		int K = B[i].size();
  		if(K&1)odd=1;
  	}
  	if(odd){
  		cout << -1 << endl;
  		continue;
  	}
  	vc<int>p1,p2;
  	fo(i,1,5000){
  		int K = B[i].size();
			fo(j,1,K/2){
				p1.pb(B[i][2*j-2]);
				p2.pb(B[i][2*j-1]);
			}
  	}
  	fo(i,1,N/2){
  		cout << p1[i-1] << sp << p2[i-1] << endl;
  	}
	}
}					