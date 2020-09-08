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

const int N=1e5+5;
 
int n, m;
int a[N], lastinc[N], lastdec[N];

int main(){
	NINJA;

	cin >> n >> m;
	Fo(i,1,n+1) cin >> a[i];

	lastinc[n] = n, lastdec[n] = n;
	for(int i=n-1;i>=1;i--){
		if(a[i]<=a[i+1]) lastinc[i] = lastinc[i+1];
		else lastinc[i] = i;

		if(a[i]>=a[i+1]) lastdec[i] = lastdec[i+1];
		else lastdec[i] = i;
	}

	while(m--){
		int l,r; cin >> l >> r;
		if(lastdec[lastinc[l]]>=r) puts("Yes");
		else puts("No");
	}


	return 0;
}