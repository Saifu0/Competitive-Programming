#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 100010;
char s[mxn];
int n,m; 

int32_t main(){
	NINJA;
	

	cin >> n >> m;
	scanf("%s",s+1);

	//cout << s+1 << endl;

	m = min(m,n-m+1);
	int ans=0,l,r;
	for(l=1;l<=n&&s[l]==s[n-l+1];++l);
	if(l>n){
		cout << 0 << endl;
		return 0;
	}

	for(r=n/2;s[r]==s[n-r+1];--r);
	ans = min(abs(l-m),abs(r-m)) + r-l;

	//cout << ans << endl;

	for(int i=m;i<=n;i++){
		if(s[i]!=s[n-i+1]){
			ans += min(abs(s[i]-s[n-i+1]),26-abs(s[i]-s[n-i+1]));
			s[i] = s[n-i+1];
		}
	}

	cout << ans << endl;

	return 0;
}