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
    int n, rbl;
    cin >> n; 
    map<int,int>mp;
    bool possible = 1;
    fo(i,1,n){
      cin >> rbl;
      if(rbl==25){
        mp[25]++;
      }
      if(rbl==50){
        mp[50]++;
        if(mp[25]>0)mp[25]--;
        else{
          possible = 0;
        }
      }
      if(rbl==100){
        mp[100]++;
        if(mp[50]>0 && mp[25]>0){
          mp[50]--;mp[25]--;
        }
        else if(mp[50]==0 && mp[25]>=3){
          mp[25]-=3;
        }
        else{
          possible = 0;
        }
      }
    }
    if(possible)cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}