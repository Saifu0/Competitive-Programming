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

	int n; cin >> n;
	string s;
	map<char, int> m;

	cin >> s;
		
	int hf = 0;
	int ff = 0;

	fo(i,n){
		m[s[i]]++;
	}

	if(m['4']==0 && m['7']==0){
		cout << "NO" << endl;
		return 0;
	}

	if(n%2){
		int f = n/2;
		map<char, int> m1,m2;

		fo(i,f+1){
			m1[s[i]]++;
		}

		Fo(i,n/2+1,n){
			m2[s[i]]++;
		}

		if(m1.size()>=2){
			if(m1['4']==0 || m1['7']==0){
				cout << "NO" << endl;
				return 0;
			}
		}

		if(m2.size()>=2){
			if(m2['4']==0 || m2['7']==0){
				cout << "NO" << endl;
				return 0;
			}
		}

		if(m1['4']==m2['4'] && m1['7']==m2['7']) cout << "YES" << endl;
		else cout << "NO" << endl;
	}else{
		map<char, int> m1,m2;

		int f = n/2;
		fo(i,f) m1[s[i]]++;
		Fo(i,f,n) m2[s[i]]++;


		if(m1.size()>=2){
			if(m1['4']==0 || m1['7']==0){
				cout << "NO" << endl;
				return 0;
			}
		}

		if(m2.size()>=2){
			if(m2['4']==0 || m2['7']==0){
				cout << "NO" << endl;
				return 0;
			}
		}

		if(m1['4']==m2['4'] && m1['7']==m2['7']) cout << "YES" << endl;
		else cout << "NO" << endl;
	}






	return 0;
}