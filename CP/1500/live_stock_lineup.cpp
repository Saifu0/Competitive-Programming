// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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


vector<string> cows, beside_a,beside_b;
int n;

int check(string a){
	fo(i,8){
		if(cows[i]==a) return i;
	}
	return -1;
}

bool satisfy(){
	fo(i,n){
		if(abs(check(beside_a[i])-check(beside_b[i]))!=1) return false;
	}
  return true;
}

int32_t main(){
	NINJA;
  freopen("lineup.in", "rt", stdin);
  freopen("lineup.out", "wt", stdout);
	 cin >> n;
	 cows.push_back("Beatrice");
    cows.push_back("Belinda");
    cows.push_back("Bella");
    cows.push_back("Bessie");
    cows.push_back("Betsy");
    cows.push_back("Blue");
    cows.push_back("Buttercup");
    cows.push_back("Sue");

  	fo(i,n){
  		string a,t,b;
  		cin >> a >> t >> t >> t >> t >> b;
  		beside_a.pb(a);
  		beside_b.pb(b);
  	}

  	do{
  		if(satisfy()){
  			for(string a : cows) cout << a << endl;
  			break;
  		}
  	}while(next_permutation(cows.begin(), cows.end()));

	
	return 0;
}