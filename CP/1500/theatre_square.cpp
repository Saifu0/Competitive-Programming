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

	ll n,m,a; cin >> n >> m >> a;

	ll cnt = 0;

	//cnt += (n/a)*(m/a);

	if(m%a){
		if(n%a) cnt += (n/a+1)*(m/a+1);
		else cnt += (n/a)*(m/a+1);
	}
	else{
		if(n%a) cnt += (n/a+1)*(m/a);
		else cnt += (n/a)*(m/a);
	}
	

	cout << cnt << endl;


	return 0;
}