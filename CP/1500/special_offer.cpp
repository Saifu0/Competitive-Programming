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
#define ld long double
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

	int p,d; cin >> p >> d;
	int y = 0;
	int ans = p;
	int x = ans;

	while(x!=0){
		if(x%10==9) y++;
		else break;
		x /= 10;
	}

	int k=10;
	while(true){
		int p2 = p;
		p2 -= (p2%k);
		p2--;
		k*=10;
		if(p-p2<=d){
			int x = p2;
			int y2 = 0;
			while(p2){
				if(p2%10==9) y2++;
				else break;
				p2 /= 10;
			}
			if(y2 > y) ans = x;
		}else break;
	}

	cout << ans << endl;
	
	return 0;
}