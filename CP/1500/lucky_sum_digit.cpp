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

int32_t main(){
	NINJA;

	int n; cin >> n;
	map<pair<int,int>,int> m;

	for(int i=0;i<=n;i++){
		if((n-(i*7))%4==0 && (n-(i*7)) >= 0){
			m[{(n-(i*7))/4 + i,(n-(i*7))/4}] = i;
		}
	}
//	if(n==7) m[{0,1}] = 7;
	//cout << m.size() << endl;
	if(m.size()==0){
		cout << -1 << endl;
		return 0;
	}

	auto it  = m.begin();

	int ff = it->F.F;
	int a,b=inf;

	for(auto it : m){
		//cout << it.F.F << " " << it.F.S << endl;
		if(it.F.F==ff){
			if(b>it.S){
				a=it.F.S;
				b=it.S;
			}
		}
	}

	fo(i,a) cout << 4;
	fo(i,b) cout << 7;

	cout << endl;
	
	return 0;
}