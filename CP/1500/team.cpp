#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

int32_t main(){
	NINJA;
	
	int n,m; cin >> n >> m;
		
	if(m<n-1||(n+1)*2<m){
		puts("-1");
		return 0;
	}
	
	if(m==n-1){
		printf("0");
		fo(i,m){
			printf("1");
			printf("0");
		}
	}else if(m==n){
		fo(i,m){
			printf("1");
			printf("0");
		}
	}else{
		int a = n+1;
		int b = m-a;
		
		if(a&&b) printf("11"), --a, --b;
		else printf("1"), --a;
		for(int i=0;i<n;i++){
			printf("0");
			if(a&&b) printf("11"),--a,--b;
			else printf("1"), --a;
		}
	}

	return 0;
}

