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

const int mxn = 1e5+500;
char a[mxn];

int main(){
	NINJA;

	int n; cin >> n;
	char ch = 'a';

	if(n<5){
		fo(i,n) cout << ch++;
		cout << endl;
		return 0;
	}

	for(int j=1;j<=4;j++){
		for(int i=j;i<=n;i+=4){
			a[i] = ch;
		}
		ch++;
	}
	
	
	
	Fo(i,1,n+1) cout << a[i];

	return 0;
}