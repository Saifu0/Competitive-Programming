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

const int mxn = 1234;
ll a[mxn];

int main(){
	NINJA;

	int n; cin >> n;
	fo(i,n) cin >> a[i];

	fo(i,n){
		if(i && i<n-1){
			if(a[i-1] > a[i] && a[i]<a[i+1]){
				if(a[i-1]>a[i+1]) a[i+1] = a[i];
				else a[i-1] = a[i];
			}
		}
	}

	fo(i,n) cout << a[i] << " ";

	return 0;
}