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

	int n,m; cin >> n >> m;

	if(m>n) swap(n,m);

	int ans = 0;
	while(true){
		if(n>m && n>1 && m>0){
			n -= 2;
			m -= 1;
			ans += 1;
		}else if(m>=n && m>1 && n>0){
			m -= 2;
			n -= 1;
			ans +=1;
		}else{
			break;
		}
	}

	cout << ans << endl;

	return 0;
}