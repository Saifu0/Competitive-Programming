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

const int mxn = 2e5+10;
int a[mxn];

int32_t main(){
	NINJA;

	int n; cin >> n;

	fo(i,n) cin >> a[i+1];

	stack<int> s;
	int len = 0;
	int ans = -inf;
	s.push(0);
	Fo(i,1,n+1){
		if(a[i]>0) s.push(i);
		else{
			int x = s.top();
			s.pop();

			if(a[x]==-a[i]){
				if(!s.empty()) ans = max(ans,i-s.top());
				else s.push(i);
			}else{
				s.push(i);
			}
		}
	}

	cout << ans << endl;
	
	return 0;
}