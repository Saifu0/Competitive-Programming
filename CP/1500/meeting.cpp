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

int32_t main(){
	NINJA;

	int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
	set<pair<int,int>> a;
	
	for(int i=min(y1,y2);i<=max(y1,y2);i++){
		a.insert({x1,i});
	}

	for(int i=max(y1,y2);i>=min(y1,y2);i--){
		a.insert({x2,i});
	}

	for(int i=x1+1;i<x2;i++){
		a.insert({i,y1});
		a.insert({i,y2});
	}

	// for(auto i : a) cout << i.F << " " << i.S << endl;

	set< pair<ii,ii>  > have;
	int n; cin >> n;
	fo(i,n){
		int x,y,r; cin >> x >> y >> r;
		have.insert({{x-r,y-r},{x+r,y+r}});
	}

	int cnt = 0;

	for(auto i : have){
		cout << i.F.F << " " << i.F.S << " " << i.S.F << " " << i.S.S << endl;
	}

	for(auto i : a){
		int x = i.F, y=i.S;
		bool f = 0;
		for(auto it : have){
			int a1=it.F.F,b1=it.F.S,a2=it.S.F,b2=it.S.S;
			if(x > a1 and x < a2 and y > b1 and y < b2){
				f =1;
				break;
			} 
		}
		if(!f) cnt++;
	}

	cout << cnt << endl;
	
	return 0;
}