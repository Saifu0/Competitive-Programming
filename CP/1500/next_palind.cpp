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


int main(){
	NINJA;

	int t=1;
	cin >> t;
	while(t--){
		string s; cin >> s;
		int n = s.size();
		string str = s;

		for(int i=0;i<=(n/2);i++){
			s[n-i-1]  =s[i];
		}
		if(s>str){
			cout << s << endl;
			continue;
		}

		for(int i=(n-1)/2;i>=0;i--){
			if(s[i]!='9'){
				s[i]++;
				break;
			}
			s[i] = '0';
		}

		for(int i=0;i<=n/2;i++){
			s[n-i-1] = s[i];
		}

		if(s[0]=='0'){
			s[0] = '1';
			s += '1';
		}

		cout << s << endl;
	}

	return 0;
}