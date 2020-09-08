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

bool sqr(int a){
	int f = sqrt(a);
	return (f*f==a);
}

int32_t main(){
	NINJA;

	int n; cin >> n;
	mp m;

	fo(i,n){
		int x; cin >> x;
		m[x]++;
	}

	double tot = (1.0*n*(n-1))/2*1.0;

	double sum = 0;
	for(int i=1;i<=5000;i++){
		if(m[i]>=2){
			sum += (1.0*m[i]*(m[i]-1))/2*1.0;
			for(int j=i+1;j<=5000;j++){
				if(!sqr(i*j)) continue;
				sum += m[i]*m[j];
			}
		}
	}

	printf("%0.6f",sum/tot);

	
	return 0;
}