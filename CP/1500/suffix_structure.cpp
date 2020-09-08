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

const int mxn = 1e5+500;

int cnt[mxn];

int32_t main(){
	NINJA;

	string a,b; cin >> a >> b;
	int n = sz(a);
	int m = sz(b);

	bool f=false,g=true,h=true;

	for(int i=0,j=0;i<n;i++){
		if(j<m && a[i]==b[j]) j++;
		if(j==m) f = true; 
	}

	fo(i,n) cnt[a[i]-'a']++;
	fo(i,m) cnt[b[i]-'a']--;

	fo(i,26){
		g = g&(cnt[i]==0);
		h = h&(cnt[i]>=0);
	}

	if(f) cout << "automaton" << endl;
	else if(g) cout << "array" << endl;
	else if(h) cout << "both" << endl;
	else cout << "need tree" << endl;



	
	return 0;
}