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

const int mxn = 1e6+10;
int a[mxn], f[mxn], e[mxn];

int32_t main(){
	NINJA;

	string s; cin >> s;
	stack<int> stk;

	int mx = 0;

	fo(i,sz(s)){
		if(s[i]=='(') stk.push(i);
		else{
			if(stk.empty()) a[i] = e[i] = -1;
			else{
				int idx = stk.top();
				stk.pop();

				a[i] = e[i] = idx;

				if(s[idx-1]==')' && a[idx-1] >=0  && idx>0)
					e[i] = e[idx-1];

				int l = i - e[i] + 1;
				f[l]++;
				mx = max(mx,l);
			}
		}
	}

	f[0] =1;

	cout << mx << " " << f[mx] << endl;

	
	return 0;
}