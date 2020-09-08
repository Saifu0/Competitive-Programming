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

	int n; cin >> n;
	map<int,int> m;

	fo(i,3){
		fo(j,n-i){
			int x; cin >> x;
			m[x]++;
		}
	}

	int cnt = 0;
	for(auto it : m){
		if(it.S==3) continue;
		if(cnt<2){
			cout << it.F << endl;
			cnt++;
		}
	}

	return 0;
}