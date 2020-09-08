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
     
    const int mxn = 2e5+10;
    int a[mxn];
     
    bool cmp(vector<int> v1,vector<int> v2)
    {
     for (int i=0;i<v1.size();i++)
     {
      if (i==v2.size())return true;
      if (v1[i]>v2[i])return true;
      if (v1[i]<v2[i])return false;
     }
     return false;
    }
     
    int32_t main(){
    	NINJA;
     
    	int n; cin >> n;
     
    	string ans1="",ans2="";
     
    	int sum1=0,sum2=0;
    	int lst = 0;
    	vi xx,y;
    	fo(i,n) cin >> a[i];
    	fo(i,n){
    		int x =a[i];
    		if(x<0) sum1 += -x,y.pb(abs(x));
    		else sum2 += x,xx.pb(x);
    		if(x<0) lst = 2;
    		else lst = 1;
    	}
     
    	if(sum2>sum1) cout << "first" << endl;
    	else if(sum2 < sum1) cout << "second" << endl;
    	else if(cmp(xx,y)) cout << "first" << endl;
    	else if(cmp(y,xx)) cout << "second" << endl;
    	else if(lst==1) cout << "first" << endl;
    	else cout << "second" << endl;
     
     
    	
    	return 0;
    } 