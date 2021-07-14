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

string s[4];
bool pos_corner(char c){
  int cnt=0;
  if(s[0][0]==c)cnt++;
  if(s[0][1]==c)cnt++;
  if(s[1][0]==c)cnt++;
  if(s[1][1]==c)cnt++;
  if(cnt>=3){
    return true;
  }
  cnt=0;
  if(s[0][3]==c)cnt++;
  if(s[1][3]==c)cnt++;
  if(s[0][2]==c)cnt++;
  if(s[1][2]==c)cnt++;
  if(cnt>=3){
    return true;
  }
  cnt=0;
  if(s[3][0]==c)cnt++;
  if(s[3][1]==c)cnt++;
  if(s[2][0]==c)cnt++;
  if(s[2][1]==c)cnt++;
  if(cnt>=3){
    return true;
  }
  cnt=0;
  if(s[3][3]==c)cnt++;
  if(s[2][2]==c)cnt++;
  if(s[3][2]==c)cnt++;
  if(s[2][3]==c)cnt++;
  if(cnt>=3){
    return true;
  }
  return false;
}

bool pos_0_row(char c){
  fo(i,1,2){
    int cnt=0;
    if(s[0][i]==c)cnt++;
    if(s[0][i-1]==c)cnt++;
    if(s[1][i]==c)cnt++;
    if(s[1][i-1]==c)cnt++;
    if(cnt>=3)return true;
    cnt=0;
    if(s[0][i]==c)cnt++;
    if(s[0][i+1]==c)cnt++;
    if(s[1][i]==c)cnt++;
    if(s[1][i+1]==c)cnt++;
    if(cnt>=3)return true;
  }
  return false;
}

bool pos_3_row(char c){
  fo(i,1,2){
    int cnt=0;
    if(s[3][i]==c)cnt++;
    if(s[3][i-1]==c)cnt++;
    if(s[2][i]==c)cnt++;
    if(s[2][i-1]==c)cnt++;
    if(cnt>=3)return true;
    cnt=0;
    if(s[3][i]==c)cnt++;
    if(s[3][i+1]==c)cnt++;
    if(s[2][i]==c)cnt++;
    if(s[2][i+1]==c)cnt++;
    if(cnt>=3)return true;
  }
  return false;
}

bool pos_0_col(char c){
  fo(i,1,2){
    int cnt=0;
    if(s[i][0]==c)cnt++;
    if(s[i+1][0]==c)cnt++;
    if(s[i][1]==c)cnt++;
    if(s[i+1][1]==c)cnt++;
    if(cnt>=3)return true;
    cnt=0;
    if(s[i][0]==c)cnt++;
    if(s[i-1][0]==c)cnt++;
    if(s[i][1]==c)cnt++;
    if(s[i-1][1]==c)cnt++;
    if(cnt>=3)return true;
  }
  return false;
}

bool pos_3_col(char c){
  fo(i,1,2){
    int cnt=0;
    if(s[i][3]==c)cnt++;
    if(s[i+1][3]==c)cnt++;
    if(s[i][2]==c)cnt++;
    if(s[i+1][2]==c)cnt++;
    if(cnt>=3)return true;
    cnt=0;
    if(s[i][3]==c)cnt++;
    if(s[i-1][3]==c)cnt++;
    if(s[i][2]==c)cnt++;
    if(s[i-1][2]==c)cnt++;
    if(cnt>=3)return true;
  }
  return false;
}

bool inner_rc(char c){
  fo(i,1,2){
    fo(j,1,2){
      int cnt=0;
      if(s[i][j]==c)cnt++;
      if(s[i][j-1]==c)cnt++;
      if(s[i-1][j]==c)cnt++;
      if(s[i-1][j-1]==c)cnt++;
      if(cnt>=3)return true;
      cnt=0;
      if(s[i][j]==c)cnt++;
      if(s[i][j+1]==c)cnt++;
      if(s[i-1][j]==c)cnt++;
      if(s[i-1][j+1]==c)cnt++;
      if(cnt>=3)return true;
      cnt=0;
      if(s[i][j]==c)cnt++;
      if(s[i][j-1]==c)cnt++;
      if(s[i+1][j]==c)cnt++;
      if(s[i+1][j-1]==c)cnt++;
      if(cnt>=3)return true;
      cnt=0;
      if(s[i][j]==c)cnt++;
      if(s[i][j+1]==c)cnt++;
      if(s[i+1][j]==c)cnt++;
      if(s[i+1][j+1]==c)cnt++;
      if(cnt>=3)return true;
    }
  }
  return false;
}

int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);
  ios::sync_with_stdio(0);cout.tie(0);
  int test=1;//cin >> test;
  fo(tc,1,test){
    fo(i,1,4)cin >> s[i-1];
    bool can_passed = 0;
    // corner check
    can_passed = pos_corner('#') || pos_corner('.');
    if(can_passed){
      cout << "YES\n";continue;
    }
    // 0th row check
    can_passed = pos_0_row('#') || pos_0_row('.');
    if(can_passed){
      cout << "YES\n";continue;
    }
    // 3rd row check
    can_passed = pos_3_row('#') || pos_3_row('.');
    if(can_passed){
      cout << "YES\n";continue;
    }
    // 0th col check
    can_passed = pos_0_col('#') || pos_0_col('.');
    if(can_passed){
      cout << "YES\n";continue;
    }
    // 3rd col check
    can_passed = pos_3_col('#') || pos_3_col('.');
    if(can_passed){
      cout << "YES\n";continue;
    }
    // inner rows and columns 
    can_passed = inner_rc('#') || inner_rc('.');
    if(can_passed){
      cout << "YES\n";continue;
    }
    cout << "NO\n" ;
  }
}