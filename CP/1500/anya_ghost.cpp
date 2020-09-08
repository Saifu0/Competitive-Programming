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
	int m,t,r; cin >> m >> t >> r;

	if(r>t){
		cout << -1 << endl;
		return 0;
	}

	char used[5000];
	memset(used,0,sizeof(used));

	int ans = 0;

	char *p = used + 2500;

	fo(i,m){
		int pos; cin >> pos;
		int s=0;

		Fo(j,1,t+1){
			s += p[pos-j];
		}

		for(int j=1;j<=t&&s<r;j++){
			if(!p[pos-j]){
				++s;
				++ans;
				p[pos-j] = 1;
			}
		}
		if(s<r){
			cout << "-1\n";
			return 0;
		}
	}	

	cout << ans << endl;

	return 0;
}