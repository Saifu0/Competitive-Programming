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

const int mxn = 123;
int a[mxn];
int b[mxn];

int main(){
	NINJA;

	int n; cin >> n;
	fo(i,n) cin >> a[i];

	int m; cin >> m;
	fo(i,m) cin >> b[i];

	sort(a,a+n);
	sort(b,b+m);

	int cnt = 0;

	int i=0,j=0;

	while(i<n && j<m){
		if(abs(a[i]-b[j])<=1){
			cnt++;
			i++;
			j++;
		}else if((a[i]-b[j])>1){
			j++;
		}else{
			i++;
		}
	}

	cout << cnt << endl;

	return 0;
}