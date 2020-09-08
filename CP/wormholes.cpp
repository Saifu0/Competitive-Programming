#include<bits/stdc++.h>
using namespace std;

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

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main(){
	c_p_c();
	int n,x,y;
	cin >> n >> x >> y;
	vector<ii> m;

	vi xa(x),ya(y);

	fo(i,n){
		int f,s;
		cin >> f >> s;
		m.pb({f,s});
	}

	fo(i,x) cin >> xa[i];
	fo(i,y) cin >> ya[i];

	sort(xa.begin(),xa.end());
	sort(ya.begin(),ya.end());

	int mn = INT_MAX;
	fo(i,n){
		int i1 = upper_bound(xa.begin(),xa.end(),m[i].F)-xa.begin()-1;
		int i2 = lower_bound(ya.begin(),ya.end(),m[i].S)-ya.begin();

		int a = xa[i1];
		int b = ya[i2];

		//cout << a << " " << b << endl;

		if(i1>=0 && i2>=0 && i1<x && i2 <y)
			mn = min(mn,(b-a+1));
	}
	cout << mn << endl;

	return 0;
}