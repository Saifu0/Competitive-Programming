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

int dp[60][2000][60];
int getans(int l,int s,int ch)
{
	if(l==0&&s!=0)
	return 0;
	if(l==0&&s==0)
	return 1;
	if(ch==0||s==0)
	return 0;
	if(dp[l][s][ch]!=-1)
	return dp[l][s][ch];
	int ans=0;
	for(int i=ch;i>=1;i--)
	{
		ans+=getans(l-1,s-i,i-1);
	}	
	return dp[l][s][ch] = ans;
}

int32_t main(){
	NINJA;

	memset(dp,-1,sizeof(dp));
	
	int t; cin >> t;
	int tt=1;
	while(t--){
		int l,s; cin >> l >> s;
		//s=min(s,2000LL);
		
		if(l>52)
			cout << "Case " << tt++ <<": "<< 0 << endl;
		else
			cout << "Case " << tt++ <<": "<< getans(l,s, 52) << endl;
	}
	
	return 0;
}