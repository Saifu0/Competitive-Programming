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


int main(){
	NINJA;
	int a,b,c; cin >> a >> b >> c;
	int ans = 0;

	fo(i,3){
		int r = i;
		if(a<i) break;
		if(b<i) break;
		if(c<i) break;

		r += (a-i)/3;
		r += (b-i)/3;
		r += (c-i)/3;

		ans = max(ans,r);
	}

	cout << ans << endl;

	return 0;
}