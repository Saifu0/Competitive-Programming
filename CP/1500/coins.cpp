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

	string a,b,c; cin >> a >> b >> c;
	map<char,int> m;

	if(a[1]=='>'){
		m[a[0]]++;
		m[a[2]]--;
	}else{
		m[a[0]]--;
		m[a[2]]++;
	}

	if(b[1]=='>'){
		m[b[0]]++;
		m[b[2]]--;
	}else{
		m[b[0]]--;
		m[b[2]]++;
	}


	if(c[1]=='>'){
		m[c[0]]++;
		m[c[2]]--;
	}else{
		m[c[0]]--;
		m[c[2]]++;
	}


	if(m['A']==2 && m['B']==-2 && m['C']==0){
		cout << "BCA" << endl;
	}else if(m['A']==-2 && m['B']==2 && m['C']==0){
		cout << "ACB" << endl;
	}else if(m['A']==2 && m['B']==0 && m['C']==-2){
		cout << "CBA" << endl;
	}else if(m['A']==0 && m['B']==2 && m['C']==-2){
		cout << "CAB" << endl;
	}else if(m['A']==0 && m['B']==-2 && m['C']==2){
		cout << "BAC" << endl;
	}else if(m['A']==-2 && m['B']==0 && m['C']==2){
		cout << "ABC" << endl;
	}else{
		cout << "Impossible" << endl;
		
	}

	
	return 0;
}