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

const int mxn = 1e5+500;
vector<ii> p;


int main(){
	NINJA;

	int n; cin >> n;
	fo(i,n){
		int f,s; cin >> f >> s;
		p.pb({f,s});
	}

	sort(p.begin(),p.end());

	fo(i,n-1){
		if(p[i].F < p[i+1].F && p[i].S > p[i+1].S){
			cout << "Happy Alex" << endl;
			return 0;
		}
	}

	cout << "Poor Alex" << endl;

	return 0;
}