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

int power(int a, int b)	//a is base, b is exponent
{
	if(b==0)
		return 1;
	if(b==1)
		return a;
	if(b%2 == 1)
		return (power(a,b-1)*a);
	int q = power(a,b/2);
	return (q*q);
}

int32_t main(){
	NINJA;

	while(1){
		int n; cin >> n;
		if(n==0){
			return 0;
		}
		if(n<0){
			int len= sqrt(n*-1);
			bool ok =0;
			for(int i=-2;i>=-len;i--){
				int ans= i;
				int p = 2;
				while(ans > n ){
					ans = power(i,p);
					p++;
				}
				if(ans==n){
					ok = 1;
					cout << p-1 << endl;
					break;
				}
			}
			if(!ok){
				cout << 1 << endl;
			}
		}else{
			bool ok = 0;
			for(int i=2;i*i<=n;i++){
				int temp = n;
				int cnt =0 ;
				while(temp%i==0){
					temp /= i;
					cnt++;
				}
				if(temp==1){
					ok =1;
					cout << cnt << endl;
					break;
				}
			}
			if(!ok){
				cout << 1 << endl;
			}
		}
	}
	
	return 0;
}