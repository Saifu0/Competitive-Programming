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
// #define int long long
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

long solve(int a, int b){
	long sum = 0;
	Fo(i,a,b+1){
		if(i<=3) sum += i;
		else if(i%3==0) sum += 6;
		else sum += 4;
	}
	return sum;
}

class EllysConjectureDiv2{
public:
	long getSum(int a, int b){
		return solve(a,b);
	}
};

// int32_t main(){
// 	NINJA;

// 	long a,b; cin >> a >> b;
// 	cout << solve(a,b) << endl;
	
// 	return 0;
// }
