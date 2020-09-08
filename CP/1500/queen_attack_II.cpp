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

	int n,q; cin >> n >> q;
	int f,s; cin >> f >> s;

	--f,--s;

	set<pair<int,int>> st;
	fo(i,q){
		int u,v; cin >> u >> v;
		--u,--v;
		st.insert({u,v});
	}

	int cnt = 0;

	

	int i=f-1,j=s-1;

	while(i>=0){
		if(st.find({i,s})==st.end()) cnt++;
		else break;
		i--;
	}

	i = f+1;
	while(i<n){
		if(st.find({i,s})==st.end()) cnt++;
		else break;
		i++;
	}

	while(j>=0){
		if(st.find({f,j})==st.end()) cnt++;
		else break;
		j--;
	}
	j = s+1;
	while(j<n){
		if(st.find({f,j})==st.end()) cnt++;
		else break;
		j++;
	}


	i=f-1,j=s-1;

	while(i>=0 && j>=0){
		if(st.find({i,j})==st.end()) cnt++;
		else break;
		i--,j--;
	}

	i = f+1, j = s+1;
	while(i<n && j<n){
		if(st.find({i,j})==st.end()) cnt++;
		else break;
		i++,j++;
	}

	i=f-1,j=s+1;
	while(i>=0 && j<n){
		if(st.find({i,j})==st.end()) cnt++;
		else break;
		i--,j++;
	}

	i=f+1,j=s-1;
	while(i<n && j>=0){
		if(st.find({i,j})==st.end()) cnt++;
		else break;

		i++,j--;
	}

	cout << cnt << endl;	

	
	return 0;
}