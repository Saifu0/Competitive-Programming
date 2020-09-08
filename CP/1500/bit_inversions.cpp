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

multiset<int> ans,res;
string s;

void modify(int x){
	if(x==0 || x==sz(s)) return;
	auto it = ans.find(x);
	if(it!=ans.end()){
		int a = *prev(it), b=*next(it);
		res.erase(res.find(x-a));
		res.erase(res.find(b-x));
		res.insert(b-a);
		ans.erase(it);
	}else{
		it = ans.insert(x);
		int a = *prev(it), b = *next(it);
		res.erase(res.find(b-a));
		res.insert(x-a);
		res.insert(b-x);
	}
}

int32_t main(){
	NINJA;

	cin >> s;
	ans.insert(0), ans.insert(sz(s));
	fo(i,sz(s)-1){
		if(s[i]!=s[i+1]){
			ans.insert(i+1);
		}
	}
	for(auto it=ans.begin();next(it)!=ans.end();it++){
		res.insert(*next(it)-*it);
	}
	// for(int i : ans) cout << i << endl;
	int n; cin >> n;
	while(n--){
		int x; cin >> x;
		modify(x-1);
		modify(x);
		cout << *res.rbegin() << " ";
	}
	cout << endl;
	
	return 0;
}