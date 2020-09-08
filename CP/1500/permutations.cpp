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

	if(n==1){
		cout << 1 << endl;
		return 0;
	}

	if(n==4){
		printf("2 4 1 3\n");
		return 0;
	}

	if(n==2 || n==3){
		cout << "NO SOLUTION" << endl;
		return 0;
	}

	int i=1;

	while(i<=n){
		cout << i << " ";
		i += 2;
	}

	 i = 2;

	while(i<=n){
		cout << i << " ";
		i += 2;
	}

	return 0;
}