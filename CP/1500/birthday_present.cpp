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
int a[mxn];
int b[mxn];

int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;

		Fo(i,1,n+1){
			cin >> a[i];
			b[i] = a[i];
		}

		Fo(i,1,k+1){
			vi s;
			for(int j=i;j<=n;j+=k) s.pb(a[j]);

			sort(s.begin(), s.end());

			int idx = 0;

			for(int j=i;j<=n;j+=k) a[j] = s[idx++];
		}


		Fo(i,1,k+1){
			vi s;
			for(int j=i;j<=n;j+=k) s.pb(b[j]);

			sort(s.rbegin(), s.rend());

			int idx = 0;

			for(int j=i;j<=n;j+=k) b[j] = s[idx++];
		}

		bool f = true, g = true;
		Fo(i,1,n){
			if(a[i]<=a[i+1]) continue;
			f = false;
			break;
		}

		Fo(i,1,n){
			if(b[i]>=b[i+1]) continue;
			g = false;
			break;
		}

		if(f||g) cout << "yes" << endl;
		else cout << "no" << endl;

	}

	return 0;
}