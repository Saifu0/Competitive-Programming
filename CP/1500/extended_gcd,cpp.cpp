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
typedef tuple<int,int,int> iii;

iii gcd(int a, int b){
	if(b==0) return  make_tuple(1,0,a);
	else{
		int x,y,g;
		tie(x,y,g) = gcd(b,a%b);
		return make_tuple(y,x-(a/b)*y,g);
	}
}
	

int32_t main(){
	NINJA;
	
	
	int x,y,g;
	tie(x,y,g) = gcd(30,12);
	
	cout << x << " " << y << " " << g << endl;

	return 0;
}

