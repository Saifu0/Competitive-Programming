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

int32_t main(){
  NINJA;

  int n,x; cin >> n >> x;

  vi a(n);
  fo(i,n)cin >> a[i];
      
  int l,r;
  if(x<0){
    int min_so_far=inf,mn=0;
    int tempL=0;
    fo(i,n){
      mn += a[i];
      if(mn<min_so_far){
        min_so_far=mn;
        l=tempL,r=i;
      }
      if(mn>=0){
        mn=0;
        tempL=i+1;
      }
    }
  }else if(x>0){
    int tempL=0;
    int mx_so_far=-inf,mx=0;
    fo(i,n){
      mx += a[i];
      if(mx>mx_so_far){
        mx_so_far=mx;
        l=tempL,r=i;
      }
      if(mx<=0){
        mx=0;
        tempL=i+1;
      }
    }
  }else{
    int min_so_far=inf,mn=0;
    int tempL=0;
    fo(i,n){
      mn += a[i];
      if(mn<min_so_far){
        min_so_far=mn;
        l=tempL,r=i;
      }
      if(mn>=0){
        mn=0;
        tempL=i+1;
      }
    }
  }

  int tempx = -inf, tempm=0;
  fo(i,n){
    tempm += a[i];
    if(tempx<tempm){
      tempx=tempm;
    }
    if(tempm<0){
      tempm=0;
    }
  }

  debug() << deb(l) deb(r);
  for(int i=(l > r ? l=r-1 : l) ;i<=r;i++) a[i] = a[i]*x;

  debug() << deb(a);

  int mx=-inf,mn=0; 

  fo(i,n){
    mn += a[i];
    if(mn>mx){
      mx=mn;
    }
    if(mn<0){
      mn=0;
    }
  }

  cout << max({mx,0ll,tempx}) << endl;
  
  return 0;
}

// 3 -5
// -1 -3 5