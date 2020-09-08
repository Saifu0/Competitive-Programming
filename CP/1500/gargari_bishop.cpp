#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 2345;
int a[mxn][mxn],b[mxn][mxn],c[mxn][mxn],d[mxn][mxn];
int n;

int32_t main(){
  NINJA;

  cin >> n;

  Fo(i,1,n+1) Fo(j,1,n+1) cin >> a[i][j];

  Fo(i,1,n+1){
    Fo(j,1,n+1){
      c[i][j] = c[i-1][j-1] + a[i][j];
    }
  }

  Fo(i,1,n+1){
    for(int j=n;j>=1;j--){
      d[i][j] = d[i-1][j+1] + a[i][j];
    }
  }

  // cout << endl << endl;

  // Fo(i,1,n+1){
  //   Fo(j,1,n+1) cout << c[i][j] << " ";
  //   cout << endl;
  // }


  // cout << endl << endl;

  // Fo(i,1,n+1){
  //   Fo(j,1,n+1) cout << d[i][j] << " ";
  //   cout << endl;
  // }

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      b[i][j] += c[i+(n-max(i,j))][j+(n-max(i,j))];
      if(n-i<j-1) b[i][j] += d[n][j-(n-i)];
      else b[i][j] += d[i+j-1][1];
      b[i][j] -= a[i][j];
    }
  }

  int mx1 = -inf, mx2=-inf, x1,y1,x2,y2;

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if((i+j)%2){
        if(b[i][j]>mx1){
          mx1 = b[i][j];
          x1 = i; y1 = j;
        }
      }else{
        if(b[i][j]>mx2){
          mx2 = b[i][j];
          x2 = i, y2 = j;
        }
      }
    }
  }

  mx1 += mx2;

  cout << mx1 << endl;
  cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;


  
  return 0;
}