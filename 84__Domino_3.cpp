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
  ios_base::sync_with_stdio(0);cin.tie(0);
  ios::sync_with_stdio(0);cout.tie(0);
  int test=1;//cin >> test;
  fo(tc,1,test){
  	int n, a, b;
    cin >> n;
  	int na = 0, nb = 0, ab = 0;
  	fo(i,1,n){
  		cin >> a >> b;
  		if(a&1 && b&1)ab++;
  		else if(a&1)na++;
  		else if(b&1)nb++;
  	}
    // W(n);W(na);W(nb);W(ab);
  	ab = ab%2;
  	if(ab==0){
  		if((na+nb)&1){
  			cout << -1 << endl;continue;
  		}
  		else{
  			if(na&1^1 && nb&1^1){
 		 			cout << 0 << endl;continue;
  			}
  			else {
  				cout << 1 << endl;continue;
  			}
  		}  		
  	}
    if(ab==1){
      if((na+nb)&1){
        cout << -1 << endl;continue;
      }
      if((na&1 && nb&1)){
        cout << 0 << endl;continue;
      }
      if(na==0 && nb==0){
        cout << -1 << endl;continue;
      }
      if(na&1^1 && nb&1^1){
        cout << 1 << endl;continue;
      }
    }
	}
}					

/*

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
  ios_base::sync_with_stdio(0);cin.tie(0);
  ios::sync_with_stdio(0);cout.tie(0);
  int test=1;//cin >> test;
  fo(tc,1,test){
    int n, a, b, s1=0, s2=0, diff_parity = 0;
    cin >> n;
    fo(i,1,n){
      cin >> a >> b;
      if((a&1 && b&1^1) || (b&1 && a&1^1))diff_parity++;
      s1+=a;
      s2+=b;
    }
    if(s1&1^1 && s2&1^1){
      cout << 0 << endl;continue;
    }
    if((s1&1 && s2&1^1) || (s1&1 && s1&1^1)){
      cout << -1 << endl;continue;
    }
    if(s1&1 && s2&1){
      if(diff_parity>0){
        cout << 1 << endl;continue;
      }
    }
    cout << -1 << endl;
  }
}         

*/