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

	int x[(ll)1e5+500],h[(ll)1e5+500];
	fo(i,n){
		cin >> x[i] >> h[i];
	}

	x[n] =  2*(1e9) + 100;
	int prev = - (1e9+100);

	int cnt = 0;

	fo(i,n){
		if(prev < x[i]-h[i]){
			cnt++;
			prev = x[i];
		}else if(x[i]+h[i]<x[i+1]){
			cnt++;
			prev = x[i]+h[i];
		}else{
			prev = x[i];
		}
	}

	cout << cnt << endl;

	return 0;
}