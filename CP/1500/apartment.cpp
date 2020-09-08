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

const int mxn = 2e5+500;

int n,m;
ll k;

int main(){
	NINJA;

	cin >> n >> m >> k;

	vector<ll> a(n), b(m);

	fo(i,n) cin >> a[i];

	fo(i,m) cin >> b[i];

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int cnt =0;

	int j=0,i=0;

	while(i<n && j<m){
		if(abs(a[i]-b[j])<=k){
			//cout << abs(a[i]=b[j]) << " ";
			cnt++;
			i++;
			j++;
		}else if((a[i]-b[j])>k){
			j++;
		}else if((b[j]-a[i])>k){
			i++;
		}

		//cout << i << " " << j << endl;
	}

	cout << cnt << endl;

	return 0;
}