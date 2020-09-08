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
double a[mxn];

int main(){
	NINJA;

	ll n,l; cin >> n >> l;
	fo(i,n) cin >> a[i];

	sort(a,a+n);

	double d = a[0];
	if(l-a[n-1] > d) d = l-a[n-1];

	fo(i,n-1){
		if((a[i+1]-a[i])/2 > d){
			d = (a[i+1]-a[i])/2;
		}
	}

	printf("%0.10f",d);


	return 0;
}