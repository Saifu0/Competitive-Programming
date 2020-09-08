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

const int mxn = 1e5+10;


int32_t main(){
	NINJA;

	vi a,b; 
	int n,q; cin >> n >> q;
	fo(i,n){
		int x; cin >> x;
		a.pb(x);
	}

	fo(i,n){
		int x; cin >> x;
		b.pb(x);
	}

	int cur=0;
	int target=0;

	fo(i,n){
		if(a[0]==b[i]){
			target = i;
			break;
		}
	}

	vector<pair<char,int>> qq;

	fo(i,q){
		char ch;
		int x; cin >> ch >> x;
		qq.pb({ch,x});
	}

	int cnt = 1;
	for(auto i : qq){
		if(i.F=='L'){
			cur -=i.S;
			cur %= n;
		}else{
			cur += i.S;
			cur %= n;
		}

		cout << cur << endl;

		if(cur==target){
			cout << cnt << endl;
			return 0;
		}
		cnt++;
	}

	cout << -1 << endl;
	
	return 0;
}