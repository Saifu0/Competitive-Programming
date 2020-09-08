#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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

ll F[50];

int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;

		Fo(i,1,32) F[i] = 0;

		fo(i,n){
			string s; cin >> s;
			int mask = 0;
			for(char ch : s){
				if(ch=='a') mask = mask|(1<<0);
				if(ch=='e') mask = mask|(1<<1);
				if(ch=='i') mask = mask|(1<<2);
				if(ch=='o') mask = mask|(1<<3);
				if(ch=='u') mask = mask|(1<<4);
			}
			F[mask]++;
		}

		ll res = 0;

		Fo(i,1,32){
			Fo(j,i+1,32){
				if((i|j)==31)
				res += (ll)(F[i]*F[j]);
			}
		}

		res += (F[31]*(F[31]-1))/2;

		cout << res << endl;
	}

	return 0;
}