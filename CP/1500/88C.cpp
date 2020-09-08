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

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int h,c,t; cin >> h >> c >> t;

		if(h==t){
			cout << 1 << endl;
			continue;
		}else if(2*t <= (h+c)){
			cout << 2 << endl;
			continue;
		}else{
			int x = (t-c)/(2*t-h-c);
			int y = x+1;

			long double try1 = ((h*x)+(c*(x-1)))/(1.0 * 2*x-1);
			long double try2 = ((h*y)+(c*(y-1)))/(1.0*2*y-1);

			long double diff1 = abs(t-try1);
			long double diff2 = abs(t-try2);

			if(diff1<=diff2) cout << 2*x-1 << endl;
			else cout << 2*y - 1<< endl;
		}

	}
	
	return 0;
}