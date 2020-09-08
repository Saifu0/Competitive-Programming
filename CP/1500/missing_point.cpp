// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int _; cin >> _;
// 	while(_--){
// 		int n;
// 		scanf("%d",&n);
// 		map<int,int> m1,m2;
// 		for(int i=0;i<4*n-1;i++){
// 			int x,y;
// 			scanf("%d%d",&x,&y);
// 			m1[x]++;
// 			m2[y]++;
// 		}
// 		for(auto it : m1){
// 			if(it.second%2==1) cout << it.first << " ";
// 		}
// 		for(auto it: m2){
// 			if(it.second%2==1) cout << it.first << " ";
// 		}
// 		cout << endl;
// 	}
// }

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

	int t,n; cin >> t;
	while(t--){
		cin >> n;
		mp x,y;
		fo(i,4*n-1){
			int a,b;cin >> a >> b;
			x[a]++;
			y[b]++;
		}

		// for(auto it=x.begin();it!=x.end();it++){
		// 	it(it->S%2==1) cout << it->first << " ";
		// }
		// for(auto it=y.begin();it!=y.end();it++){
		// 	if(it->S%2==1) cout << it->F << " ";
		// }
		for(auto it :x) if(it.S&1) cout << it.F << " ";
		for(auto it :y) if(it.S&1) cout << it.F << " ";
		cout << endl;
	}
	
	return 0;
}