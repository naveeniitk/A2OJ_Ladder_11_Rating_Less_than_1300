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

const int mod = 1e9+7,N=2e5+5;const ll LL_max = 1e18+5;
void File(){
#ifndef ONLINE_JUDGE
  freopen("C:\\nk\\cp\\I","r",stdin);
  freopen("C:\\nk\\cp\\O","w",stdout);
#endif
}	

int main(){
  ios::sync_with_stdio(0);ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);//
  File();
  int Test=1;//cin >> Test;
  fo(T,1,Test){//cas(T);
    string s;
    cin >> s;
    int f=0,se=0;
    int n=s.length();
    fo(i,0,n-1){
    	if(s[i]=='4')f++;
    	else if(s[i]=='7')se++;
    	else continue;
    }
    // I(se,f);W(n);W(s);nk();
    if(se+f==4||se+f==7)cout << yes;
    else cout << no;
    // ll n;
    // cin >> n;
    // int f=0,s=0;
    // while(n>0){
    // 	int r=n%10;
    // 	if(r==4)f++;
    // 	if(r==7)s++;
    // }
    // if(f+s==4||f+s==7)cout << yes;
    // else cout << no;
  }
  return 0;
}
