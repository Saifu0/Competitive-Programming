#include<bits/stdc++.h>
using namespace std;

#define sc(x) scanf("%d",&x)
#define pf(c) scanf("%d",x);
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

const int mxn = 12345;
int a[mxn];


void sieve(){
	memset(a,1,sizeof(a));
	for(int i=2;i*i<=mxn;i++){
		a[i] = 0;
		for(int j=1;j<=mxn;j+=2){
			a[j] = 0;
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n==1){
			cout << -1 << endl;
			continue;
		}
		
		
	}
	
	return 0;
}
