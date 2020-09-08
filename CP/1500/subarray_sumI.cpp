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

const int mxn = 2e5+500;
int a[mxn];

int main(){
	NINJA;
	int n,x;

	cin >> n >> x;
	fo(i,n) cin >> a[i];

	int cnt = 0;

	int sum=0;
	int j = 0;
	fo(i,n){
		sum += a[i];
		while(j<n && sum>x){
			sum -= a[j];
			j++;
		}
		if(sum==x){
			cnt++;
		}
	}
	
	cout << cnt << endl;

	return 0;
}