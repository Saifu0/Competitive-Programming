#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

struct man {
	int floor,sec;
};

bool cmp(man x, man y){
	return x.floor > y.floor;
}


int main(){
	NINJA;

	int n,s; cin >> n >> s;

	man m[n];
	fo(i,n) cin >> m[i].floor >> m[i].sec;

	sort(m,m+n,cmp); 

	int ans = 0;

	ans += s-m[0].floor;
	if(m[0].sec > ans) ans += m[0].sec - ans;

	Fo(i,1,n){
		ans += m[i-1].floor - m[i].floor;
		if(m[i].sec > ans) ans += m[i].sec-ans;
	}

	ans += m[n-1].floor;

	cout << ans << endl;


	return 0;
}