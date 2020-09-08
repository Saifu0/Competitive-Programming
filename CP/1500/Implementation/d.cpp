// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
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

int32_t main(){
	NINJA;

	int n,l; cin >> n >> l;
	string s; cin >> s;

	if(l==1){
		cout << s << endl;
		return 0;
	}

	int len = n;

	string ans = s;
	l--;

	int i = 1, j = 0;

	string c = s;
	while(i<n){
		if(s[i]!=ans[j]){
			i++;
			continue;
		}

		int k = i;
		int cnt = 0;
		while(k<n && j<n && s[k]==ans[j]){
			k++,j++;
			cnt++;
		}
		if(k==n){
			len = cnt;
			break;
		}
		j = 0;
		i++;
	}

	
	string chhye = s;
	chhye = s.substr(len,n);

	if(sz(chhye)==0) chhye = s;
	//cout << chhye << endl;
	fo(i,l){
		ans =  ans + chhye;
	}

	cout << ans << endl;
	
	return 0;
}