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

const int MAXN = 5001;
const int inf = 1000000000;
const int INF = 1.0 / 0.0;
const int EPS = 1e-7;
const int mod = inf + 7;
int n, k;
bool cmp(pair<int, int> a, pair<int, int > b)
{
  if (a.first == b.first)
  {
    return a.second < b.second;
  }
  return a.first > b.first;
}
signed main()
{
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> a(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i].first >> a[i].second;
  }
  sort(all(a), cmp);
  k--;
  int ans = 0;
  for (int i = 0; i < n; ++i)
  {
    if (a[i] == a[k])
    {
      ans++;
    }
  }
  cout << ans;
  //  sp;
}


// bool comp(pair<int,int> a, pair<int,int> b){
//   if(a.first>b.first)return true;
//   if(a.first==b.first && a.second<=b.second)return true;
//   return false;
// }

// int32_t main(){
//   ios_base::sync_with_stdio(0);cin.tie(0);
//   ios::sync_with_stdio(0);cout.tie(0);
//   int test=1;//cin >> test;
//   fo(tc,1,test){
//     int n,k;
//     pair<int,int>pk;
//     cin >> n >> k;
//     vector< pair<int,int> >vk;
//     vk.pb(make_pair(100000,0));
//     map<pair<int,int>,int> mp;
//     fo(i,1,n){
//       cin >> pk.first >> pk.second;
//       mp[pk]++;
//       vk.pb(pk);
//     }
//     sort(all(vk),comp);
//     cout << mp[vk[k]] << endl;
//   }
// }