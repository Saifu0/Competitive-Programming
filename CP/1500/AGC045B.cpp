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

int32_t main(){
	NINJA;

	string s; cin >> s;
	int one = 0, zero = 0;

	int q = 0;

	int n = sz(s);

	fo(i,n){
		if(s[i]=='0') zero++;
		else if(s[i]=='1') one++;
		else q++;
	}

	cout << one << " " << zero << " " << q << endl;

	int dif = one-zero;
	if(dif<0){
		if(q<abs(dif)) one += q, q = 0;
		else q -= abs(dif), one +=abs(dif);
	}else{
		if(q<abs(dif)) zero += q, q = 0;
		else q -= dif, zero += dif; 
	}

	if(q==0){
		cout << abs(one-zero) << endl;
	}else{
		if(q%2==0){
			one += q/2;
			zero += q/2;
		}else{
			one += q/2;
			zero += q/2 +1 ;
		}
		cout << abs(one-zero) << endl;
	}
	
	return 0;
}