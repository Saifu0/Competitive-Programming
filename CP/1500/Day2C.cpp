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

const int mxn = 500055;
int a[mxn];
char s[mxn];

int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int x,y,p; cin >> x >> y >> p;
		scanf("%s",&(s+1));
		int n = strlen(s+1);

		Fo(i,1,n+1) a[i]=(s[i]=='B');

		a[n] = 2;
		int ans = 1;

		//cout <<  << endl;

		for(int i=n-1;i>=1;i--){
			if(a[i]!=a[i+1]) p-=((a[i]==0)?x:y);
			if(p<0){
				ans = i+1; break;
			}
		}
		cout << ans << endl;
	}

	return 0;
}