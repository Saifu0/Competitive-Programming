#include<bits/stdc++.h>
using namespace std;

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

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main(){
	c_p_c();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a=0,b=0;
		
		string s; cin >> s;
		int szz = sz(s);
		bool turn = true;
		int r1 = n, r2=n;

		fo(i,szz){
			if(i&1) b += s[i]-'0', r2--;
			else a += s[i]-'0', r1--;
			if(a>r2+b || b>r1+a){
				cout << i+1 << endl;
				turn = false;
				break;
			}
		}
		if(turn)
			cout << 2*n << endl;
	}

	return 0;
}