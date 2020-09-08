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

	freopen("mixmilk.in", "rt", stdin);
	freopen("mixmilk.out", "wt", stdout);

	int c1,a1; cin >> c1 >> a1;
	int c2,a2; cin >> c2 >> a2;
	int c3,a3; cin >> c3 >> a3;

	int i = 1;
	int a=1;
	while(i<=100){
		if(a==1){
			int amt = min(a1,c2-a2);
			a2 += amt;
			a1 -= amt;
			a=2;
		}else if(a==2){	
			int amt = min(a2,c3-a3);
			a3 += amt;
			a2 -= amt;
			a=3;
		}else{
			int amt = min(a3,c1-a1);
			a1 += amt;
			a3 -= amt;
			a = 1;
		}
		i++;
	}

	cout << a1 << endl << a2 << endl << a3 << endl;

	
	return 0;
}