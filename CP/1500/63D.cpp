// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define deb(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#define memo(a,val) memset(a,val,sizeof(a))
#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin(),a.end()
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define ld long double
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 3e5+10;
int a[mxn];
int n,x;
int dp[mxn][3];
int cache[mxn][3];

int solve(int i,int tog){
    if(i==n) return 0;
    int&ans = dp[i][tog];

    if(ans!=-1) return ans;

    ans=0;
    if(tog==0){
        ans=max({ans,a[i]+solve(i+1,0),a[i]*x+solve(i+1,1)});
    }else if(tog==1){
        ans=max({ans,a[i]*x+solve(i+1,1),a[i]+solve(i+1,2)});
    }else{
        ans=max({ans,a[i]+solve(i+1,2)});
    }
    
    return ans;
}

int bottom_up(){
    dp[0][0] = 0;

    for1(i,n){
        dp[i][0] = max({dp[i-1][0]+a[i-1],0ll,a[i-1]});
        dp[i][1] = max({dp[i-1][1]+a[i-1]*x,0ll,dp[i-1][0]+a[i-1]*x,x*a[i-1],0ll});
        dp[i][2] = max({dp[i-1][1]+a[i-1],a[i-1],0ll,dp[i-1][2]+a[i-1]});
    }
    int ans =0;
    for1(i,n){
        fo(j,3){
            ans=max(ans,dp[i][j]);
        }
    }
    return ans;
}


int32_t main(){
  NINJA;

  // memo(dp,-1);

  cin >> n >> x;

  fo(i,n) cin >> a[i];

  // int ans = 0;
  // fo(i,n) ans=max(ans,solve(i,0));

  // cout << ans <<  endl;

  cout << bottom_up() << endl;
  
  return 0;
}