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

	int t; cin >> t;
	while(t--){
		set<pair<int,int>> s1;
		set<pair<int,int>> s2;

		// s2.insert({0,0});
		string a; cin >> a;
		int n = sz(a);

		// s1.insert({0,0});

		int cnt = 0;
		int x=0,y=0;
		for(char c: a){
			
			if(c=='N'){
				if(s1.find({x,y+1})!=s1.end()) cnt+=1;
				else cnt += 5, s1.insert({x,y+1});
				y++;
			}
			if(c=='S'){
				if(s1.find({x,y})!=s1.end()) cnt+=1;
				else cnt += 5, s1.insert({x,y});
				y--;
			}
			if(c=='W'){
				if(s2.find({x+1,y})!=s2.end()) cnt+=1;
				else cnt += 5, s2.insert({x+1,y});
				x++;
			}
			if(c=='E'){
				if(s2.find({x,y})!=s2.end()) cnt+=1;
				else cnt += 5, s2.insert({x,y});
				x--;
			}

			
		}
		cout << cnt << endl;
	}
	
	return 0;
}