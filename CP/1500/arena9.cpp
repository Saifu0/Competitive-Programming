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

	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = sz(s);

		int con=0,vow=0;

		for(char c : s){
			if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y') vow++;
			else con++;
		}

		if(con > vow) cout << "hard" << endl;
		else{
			int j=0;
			bool f = 0;
			fo(i,n){
				if(i-j+1==3){
					char c=s[j];
					int cnt=0;
					if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y'){
						j++;
						continue;
					}
					else cnt++;
					c=s[j+1];
					if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y'){
						j++;
						continue;
					}
					else cnt++;
					c=s[j+2];
					if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y'){
						j++;
						continue;
					}
					else cnt++;
					j++;
					if(cnt==3){
						f = 1;
						break;
					}

				}
			}
			if(f){
				cout << "hard" << endl;
			}else{
				cout << "easy" << endl;
			}
			
		}
	}
	
	return 0;
}